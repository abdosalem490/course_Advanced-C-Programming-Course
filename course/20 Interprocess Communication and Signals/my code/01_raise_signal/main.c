#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(){
    alarm(5);

    // NEED TO CATCH SIGALRM or process terminates
    // signal (SIGALRM, alarmHandler);

    for(int i = 1; i < 10; ++i){
        printf("%d\n", i);
        sleep(1);
    }

    printf("Testing SIGSTOP\n");
    raise(SIGSTOP); // will case the program to stop
    printf("I am back\n\n");

    return 0;  
}

