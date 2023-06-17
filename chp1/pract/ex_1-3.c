#include <stdio.h>

/* print Farhenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temperature table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size*/

  // right-justify 10 spaces
  printf("%10s\t%10s\n", "Farenheit", "Celsius");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr-32.0);
    printf("%10.0f\t%10.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}