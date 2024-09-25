/*
 * File: localFullyConnected.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 24-Sep-2024 22:06:20
 */

/* Include Files */
#include "localFullyConnected.h"

/* Function Definitions */
/*
 * Arguments    : const float x[3]
 *                float y[3]
 * Return Type  : void
 */
void localFullyConnected(const float x[3], float y[3])
{
  float f;
  float f1;
  float f2;
  int i;
  f = x[0];
  f1 = x[1];
  f2 = x[2];
  for (i = 0; i < 3; i++) {
    y[i] = ((f + f1) + f2) + 0.1F;
  }
}

/*
 * File trailer for localFullyConnected.c
 *
 * [EOF]
 */
