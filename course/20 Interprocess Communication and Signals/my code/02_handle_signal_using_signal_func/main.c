#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler_dividebyzero(int signum);


int main(){

    int result = 0;
    int v1 = 0, v2 = 0;
    
    void (*sigHandlerReturn)(int);
    sigHandlerReturn = signal(SIGFPE, handler_dividebyzero);

    if(sigHandlerReturn == SIG_ERR){
        perror("Signal error:");
        return 1;
    }

    v1 = 121;  
    v2 = 0;
    result = v1 / v2;
    printf("Result of Divide by Zero is %d\n", result);

    return 0;  
}


void handler_dividebyzero(int signum)
{
    if(signum == SIGFPE){
        printf("Received SIGFPE, Divide by Zero Exception\n");
    }else{
        printf("Received %d Signal\n", signum);
    }
}