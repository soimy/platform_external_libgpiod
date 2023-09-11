#include <stdio.h>
#include <unistd.h>
#include <gpiod.h>
#include "gpiotest.h"

#define LEN 45
#define HIGH 1

int main()
{

	struct gpiod_chip *input_chip, *output_chip;
	struct gpiod_line *input_line, *output_line;
	
	bool output_value, input_value;
    int ret,test_res = 0, total = 0;

    for (int num = 0; num < 2; num++ ){
        int in_chip = 0;
        int in_line = 1;
        int out_chip = 2;
        int out_line = 3;

        if ( 1 == num ){
          in_chip = 2;
          in_line = 3;
          out_chip = 0;
          out_line = 1;
        }

        for (int i = 0; i < LEN; i++){
          input_chip = gpiod_chip_open_by_number(test_gpio[i][in_chip]);
          if(!input_chip)
              return -1;

          input_line = gpiod_chip_get_line(input_chip,test_gpio[i][in_line]);
          if(!input_line){
              gpiod_chip_close(input_chip);
              return -1;
          }

          ret = gpiod_line_request_input(input_line,"input");
          if(ret){
              gpiod_chip_close(input_chip);
              return -1;
          }

          output_chip = gpiod_chip_open_by_number(test_gpio[i][out_chip]);
          if(!output_chip)
              return -1;

          output_line = gpiod_chip_get_line(output_chip,test_gpio[i][out_line]);
          if(!output_line){
              gpiod_chip_close(output_chip);
              return -1;
          }

          ret = gpiod_line_request_output(output_line,"output",HIGH);
          if(ret){
              gpiod_chip_close(output_chip);
              return -1;
          }

          test_res = 1;
          for(int j = 0;j < 2; j++){
              output_value = gpiod_line_get_value(output_line);
              gpiod_line_set_value(output_line, !output_value);
              //printf("output gpio[%d]: %d\t",i, !output_value);
              sleep(1);

              input_value = gpiod_line_get_value(input_line);
              //printf("input gpio[%d]: %d\n",i, input_value);
              if ( output_value != !input_value){
                  printf("test fail array [%d]\n",i);
                  test_res = -1;
                  break;
              } 
          }

          if ( 1 == test_res ){
            printf("PASS gpio array %d\n",i);
            total += 1;
          }

          // release gpio
          gpiod_chip_close(input_chip);
          gpiod_chip_close(output_chip);
        }
    }

    printf("total pass gpio number %d\n",total);
	return 0;
}
