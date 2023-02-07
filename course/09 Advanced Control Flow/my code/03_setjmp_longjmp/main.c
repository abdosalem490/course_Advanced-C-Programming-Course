#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

jmp_buf buf;

void myFunction(){
    printf("in myFunction()\n");
    longjmp(buf, 1);

    /*NOT REACHED*/
    printf("you will never see this, because I longjmp'd");
}

int main(){
    
    if(setjmp(buf))
        printf("back in main\n");
    else{
        printf("First time through\n");
        myFunction();
    }
    
    int i = setjmp(buf);
    printf("%d\n", i);
    if(i != 0)
        exit(0);
    longjmp(buf, 42);
    printf("does this line get printer ?\n");
    return 0;
}
