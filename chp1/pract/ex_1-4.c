#include <stdio.h>

/* print Farhenheit-Celsius table
    for celsius = -10, 0, 10, ..., 160; floating-point version */

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;        /* lower limit of temperature table */
  upper = 160;        /* upper limit */
  step = 10;          /* step size*/

  // right-justify 10 spaces
  printf("%10s\t%10s\n", "Celsius", "Farenheit");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%10.0f\t%10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}