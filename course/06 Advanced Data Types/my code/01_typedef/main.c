#include <stdio.h>

typedef int* i_pointer;
#define paech int
#define int_pointer int *
typedef int banana;
typedef char * char_ptr;

// deference between typedef and define
int_pointer chalk, cheese; // same as int *chalk, cheese;
char_ptr Bently, Rolls_royce;   // same as char *bently, *Rolls_royce;

/*
unsigned peach i1;
unsigned banana i2;
*/

int main(){

    i_pointer p; // same as int* p;
    i_pointer a, *b;    // same as int *a, **b;
    i_pointer myArray[10]; // same as int *myArray[10];

    return 0;
}
