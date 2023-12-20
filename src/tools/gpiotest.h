#include <rockchip.h>

const int test_gpio[][4] = {
  [0]  = {0, RK_PD3, 0, RK_PD4},
  [1]  = {0, RK_PD5, 0, RK_PD6},

  [2]  = {0, RK_PA0, 3, RK_PC5},

  [3]  = {0, RK_PB6, 0, RK_PC5},
  [4]  = {0, RK_PB5, 0, RK_PC4},

  [5]  = {0, RK_PC3, 0, RK_PC1},
  [6]  = {0, RK_PC0, 0, RK_PB4},
  [7]  = {0, RK_PB3, 0, RK_PB0},

  [8]  = {1, RK_PA0, 1, RK_PA1},
  [9]  = {0, RK_PB7, 1, RK_PA4},

  [10] = {1, RK_PC7, 1, RK_PD0},
  [11] = {1, RK_PD1, 1, RK_PD2},
  [12] = {1, RK_PD3, 1, RK_PD4},

  [13] = {2, RK_PA3, 2, RK_PA4},
  [14] = {2, RK_PA5, 2, RK_PA7},
  [15] = {2, RK_PA6, 2, RK_PB0},
  [16] = {2, RK_PB1, 2, RK_PB2},
  [17] = {2, RK_PB3, 2, RK_PB4},
  [18] = {2, RK_PB5, 2, RK_PC5},
  [19] = {2, RK_PB7, 2, RK_PC0},
  [20] = {2, RK_PC1, 2, RK_PB6},
  [21] = {2, RK_PC3, 2, RK_PC4},
  [22] = {2, RK_PC2, 2, RK_PC6},

  [23] = {3, RK_PA1, 3, RK_PA2},
  [24] = {3, RK_PA3, 3, RK_PA4},
  [25] = {3, RK_PA7, 3, RK_PA6},
  [26] = {3, RK_PB2, 3, RK_PB0},
  [27] = {3, RK_PB1, 3, RK_PA5},
  [28] = {3, RK_PB3, 3, RK_PB4},
  [29] = {3, RK_PB5, 3, RK_PB6},
  [30] = {3, RK_PB7, 3, RK_PC4},
  [31] = {3, RK_PC1, 3, RK_PC2},
  [32] = {3, RK_PC3, 3, RK_PC0},

  [33] = {3, RK_PD1, 3, RK_PC7},
  [34] = {3, RK_PD0, 3, RK_PC6},
  [35] = {3, RK_PD2, 3, RK_PD3},
  [36] = {3, RK_PD4, 3, RK_PD5},
  [37] = {3, RK_PD6, 3, RK_PD7},
  [38] = {4, RK_PA2, 4, RK_PA4},
  [39] = {4, RK_PA0, 4, RK_PA3},
  [40] = {4, RK_PA1, 4, RK_PA5},
  [41] = {4, RK_PB4, 4, RK_PB5},
  [42] = {4, RK_PC0, 4, RK_PB6},
  [43] = {4, RK_PB7, 4, RK_PC1},

  [44] = {4, RK_PC2, 4, RK_PC3},
  [45] = {4, RK_PC4, 4, RK_PC5},
};
