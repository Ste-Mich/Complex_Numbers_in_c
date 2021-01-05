#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main()
{

#ifdef __STDC_NO_COMPLEX_
    printf("-//- Complex numbers are not supported\n\n");
    exit(1);
#else
    printf("-//- Complex numbers are supported\n\n");
#endif
    double complex num = 2.0 + 4.0 * I;
    printf("The real part of num is %.2f, the imaginary is: %.2fI  \n", creal(num), cimag(num));

    num = 2.0 + I * I;
    printf("- Multiplying I by itself creates a -1.\n");
    printf("num real part: %.2f, num imaginary part: %.2fI \n", creal(num), cimag(num));

    double complex num1 = 2.0 + 5.0 * I;
    double complex num2 = 7.0 + 3.0 * I;
    printf("- You can also perform conjugation.\n");
    printf("num1 + num2 is: %.2f+%.2fI \n", creal(num1 + num2), cimag(num1 + num2));
    printf("num1 - num2 is: %.2f+%.2fI \n", creal(num1 - num2), cimag(num1 - num2));

    printf("\n");
    return 0;
}
