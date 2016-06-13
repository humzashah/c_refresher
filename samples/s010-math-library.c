/* the math library */

/*
  the math library contains:
  - miscellaneous math functions e.g. ceil(), fabs(), floor()
  - exponential and logarithmic functions e.g. exp(), pow(), log10()
  - trigonometric and hyperbolic functions e.g. acos(), cos(), cosh()

  more functions can be seen at:
  http://www.tutorialspoint.com/c_standard_library/math_h.htm
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (void) {
  printf("'Flooring' 3.2 yields %f\n", floor(3.2));
  /* Output: => 'Flooring' 3.2 yields 3.000000 */

  printf("'Ceiling' 3.2 yields %f\n", ceil(3.2));
  /* Output: => 'Ceiing' 3.2 yields 4.000000 */

  printf("The square root of 16 is %f\n", sqrt(16));
  /* Output: => The square root of 16 is 4.000000 */

  printf("3 raised to the power of 5 is %f\n", pow(3, 5));
  /* Output: => 3 raised to the power of 5 is 243.000000 */

  printf("Cosine of 3.142 radians is %f\n", cos(3.142));
  /* Output: => Cosine of 3.142 radians is -1.000000 */

  exit(0);
}
