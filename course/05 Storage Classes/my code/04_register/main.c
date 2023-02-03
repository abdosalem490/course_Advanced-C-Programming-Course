#include <stdio.h>

//register int y = 10; // register only usewd in a local scope 

int main(){
    register int x; // register variable (counter) -> the compilter may/maynot reserve a register for it (doesn't have address)
    //int *a = &x; // -> will give error in some compilers

    for(x = 1;  x <= 15; x++){
        printf("\n%d", x);
    }

    return 0;
}
