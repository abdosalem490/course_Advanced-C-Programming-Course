#include <stdio.h>
#include<malloc.h>

struct s{
    int arraySize;
    int array[];
}; // end struct s

int main(){

    int desiredSize = 5;
    struct s *ptr;

    ptr = malloc(sizeof(struct s) + desiredSize * sizeof(int));

    return 0;
}
