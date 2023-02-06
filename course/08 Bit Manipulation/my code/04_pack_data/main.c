#include <stdio.h>

struct packed_struct{
    int count;
    char c;

    unsigned int : 3;  // padding
    unsigned int f1:1;  // 1 bit (no address)
    unsigned int f2:1;  // 1 bit (no address)
    unsigned int f3:1;  // 1 bit
    unsigned int type:8; // 8 bit
    unsigned int index:18;
};

int main(){
    struct packed_struct packed_data =  {1, 1, .f1= 1};
    
    packed_data.type = 7;
    unsigned int bit = packed_data.type;
    unsigned int i = packed_data.index / 5 + 1;
    if(packed_data.f2)
        // do something

    return 0;
}
