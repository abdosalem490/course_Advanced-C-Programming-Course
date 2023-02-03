#include <stdio.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXTI__  1


int main(){

    // to check if the compiler supports complex numbers or not , check the macro called __STDC_NO_COMPLEX__ , if it's 1 then this macro is defined to be 1`

#ifdef __STDC_NO_COMPLEX__
    printf("Complex number are not supported. \n");
    exit(1);
#else
    printf("Complex numebrs are supported. \n");

    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    printf("Working with complex numbers.\n");
    printf("Starting values: cx = %.2f%+.2fi    cy = %.2f%+.2fi\n", creal(cx), cimag(cx), creal(cy), cimag(cy));
    double complex sum = cx + cy;
    printf("The sum cx + cy = %.2f%+.2fi\n", creal(sum), cimag(sum));
    double complex difference = cx - cy;
    printf("The  difference cx - cy = %.2f%+.2fi\n", creal(difference), cimag(difference));
    double complex product = cx * cy;
    printf("The  product cx * cy = %.2f%+.2fi\n", creal(product), cimag(product));
    double complex quotient = cx / cy;
    printf("The  quotient cx / cy = %.2f%+.2fi\n", creal(quotient), cimag(quotient));
    double complex conjugate = conj(cx);
    printf("The  conjugate of cx = %.2f%+.2fi\n", creal(conjugate), cimag(conjugate));
    
    
#endif

    return 0;
}
