#include <stdio.h>

int main(){
    short int w1 = 25; // 0011001
    short int w2 = 77; // 1001101
                      // --------
    short int w3 = 0; //  0001001 
    short int w4 = 0; //  1011101
    short int w5 = 0; //  1010100
    w3 = w1 & w2;
    w4 = w1 | w2;
    w5 = w1 ^ w2;

    short int temp;

    printf("%d\n", w3);
    printf("%d\n", w4);
    printf("%d\n", w5);

    // normal swaping 
    temp = w1;
    w1 = w2;
    w2 = temp;

    // swaping variables using ^
    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;


    signed int w6 = 2;
    signed int result = 0;
    result = ~w1;
    printf("%d", result);

    return 0;
}
