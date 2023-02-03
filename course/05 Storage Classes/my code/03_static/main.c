#include <stdio.h>

int initializer(){
    return 50;
}

// structure members shouldn't be static but the entire structure could be static

int fun(){  // making it `static int func` will produce error

    static int count = 0;
    //static int count2 = initializer(); // -> not allowed as it has be constant
    int localvar = 0;
    printf("automatic = %d, static = %d\n", localvar, count);
    localvar++;
    count ++;
    return count;

}


int main(){

for(int i = 0; i < 5; i++){
    fun();
}
 
    return 0;
}
