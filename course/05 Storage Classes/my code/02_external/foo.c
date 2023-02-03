
#include <stdio.h>

extern char text[][50];
int count = 5;

void foo(void){

    extern int i;
    i = 100;

}

void write_extern(void){
    printf("count is %d\n", count);
}