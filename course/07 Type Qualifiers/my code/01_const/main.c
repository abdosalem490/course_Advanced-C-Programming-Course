#include <stdio.h>


const double PI = 3.14;

int main(){
    const double pi = 3.141592654;
    // pi = pi / 2 ; // -> will give an error
    //const int days[12] = {31,28,31,30,....};
    const const const const int x = 10; // same as const int x = 10;
    typedef const int zip;

    const zip q = 8;

    const float *pf; // pf points to a constant float value
    float *const pt; // pt is a const pointer

    const float * const ptr; // ptr is const pointer that points to constant float

    float const *pfc; // same as const float *pfc;

    
    return 0;
}

// array will n't be altered
void display(const int array[], int limit);

char *strcat(char *restrict s1, const char * restrict s2);