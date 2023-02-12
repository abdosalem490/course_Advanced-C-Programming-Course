#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *calls(void *ptr){
    // using pthread_self() get current thread id
    printf("I n function \nthread id = %d\n", pthread_self());
    pthread_exit(NULL);
    return NULL;
}

int main(void){

    pthread_t thread;   // declare thread
    pthread_create(&thread, NULL, calls, NULL);
    printf("In main \nthread id = %d\n", thread);
    pthread_join(thread, NULL);
    return 0;  
}

