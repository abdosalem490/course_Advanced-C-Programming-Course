#include <stdio.h>

int main(){

    int flags = 15;  // 0000 1111
    int flags2 = 15;
    int mask = 182; //  1011 0110

    flags = flags | mask; // 1011 1111
    flags2 = flags & ~(mask); // 0000 1001

    return 0;
}
