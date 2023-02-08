#include <stdio.h>

#pragma GCC poison printf

#pragma GCC warning "hello"   // will give warning
#pragma GCC error "what"      // will give error
#pragma message "ok"          // will give a note

int main(){

    //printf("Hello");   // this will give error due to GCC Poison

    

    return 0;
}
