#include <stdio.h>


int i = 5;
char text[255][50];
void foo(void);

extern void write_extern(void);

int main(){

    printf("%i ", i);
    foo();    
    printf("%i\n", i);
    write_extern();

    return 0;
}



