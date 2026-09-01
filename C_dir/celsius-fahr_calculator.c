#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20 ..., 300 floating-point version */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("%6.2f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
