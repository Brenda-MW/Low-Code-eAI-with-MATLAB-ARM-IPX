/*---------------------------------------------------------------*/
/* Performance Monitoring Unit (PMU) Warm Up code */
/*                                                               */
/*   */
/*---------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

extern void start_marker();
extern void stop_marker();

int main() {
  (void)start_marker();

   float fv[3];
   float y[3];
  /* Initialize function 'localFullyConnected' input arguments. */
  /* Initialize function input argument 'x'. */
  /* Call the entry-point 'localFullyConnected'. */
  argInit_3x1_real32_T(fv);
  localFullyConnected(fv, y);

  return 0;
}
