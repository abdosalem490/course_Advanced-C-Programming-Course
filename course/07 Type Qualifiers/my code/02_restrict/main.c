#include <stdio.h>
#include <malloc.h>


void f1(int n, float * restrict a1, const float * restrict a2){
    int i;
    // restrict will optimize this block 
    for(i = 0; i < n; i++)
        a1[i] += a2[i];
}

int main(){
    int n ;
    int array[10];
    int * restrict restar = (int *) malloc(10 * sizeof(int));
    int *par = array;

    // restrict keyword tells the compiler to optimize the varaible
    for(n = 0; n < 10; n++){
        par[n] += 5;
        restar[n] += 5;
        array[n] += 2;
        par[n] += 3;
        restar[n] += 3;
    }

    /**
     the compiler can just optimize the above code to due to keyword restrict:
        for(n = 0; n < 10; n++){
        par[n] += 5;
        array[n] += 2;
        par[n] += 3;
        restar[n] += 8;
    }
    */

    return 0;
}
