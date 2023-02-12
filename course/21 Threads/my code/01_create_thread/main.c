#include <stdio.h>
#include <pthread.h>

void * hello_fun(){
    printf("Hello Wolrd\n");
    return NULL;
}

int main(){

    pthread_t thread = 0;
    pthread_create(&thread, NULL, hello_fun, NULL);
    //pthread_exit(NULL);
    pthread_join(thread, NULL);
    return 0;  
}

