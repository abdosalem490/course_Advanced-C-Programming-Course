#include <stdio.h>

int main(){
    int w1 = 3; // 0011
    int result = 0;
    
    result = w1 << 1; // 0110
    printf("%d\n", result);

    unsigned int w2 = 4151832098;
    result = w2 >> 1;
    printf("%d\n", result);

    return 0;
}
