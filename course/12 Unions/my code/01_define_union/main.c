#include <stdio.h>

union car{
    int i_value;
    float f_value;
};

struct {
    char *name;
   // enum symbolType type;
    union{
        int i;
        float f;
        char c;
    } data;
} table[50];


union mixed {
    char c;
    float f;
    int i;
};


union number{
    int x;
    double y;
};

int main(){

    union car car1, car2, *car3;
    printf("Memory Size occupied by data : %zu\n", sizeof(car1));
    
    union mixed x;
    x.c = 'j';
    printf("Character = %c\n", x.c);
    x.f = 784.3323;
    printf("float = %f\n", x.f);


    union number value;     // define union variable
    value.x = 100;          // put an integer into the union
    printf("value of integer x: %d\n", value.x);
    printf("value of double y: %f\n", value.y);

    value.y = 100.0;        // put a double into the same union
    printf("value of integer x: %d\n", value.x);
    printf("value of double y: %f\n", value.y);


    union number temp = value;        

    return 0;
}
