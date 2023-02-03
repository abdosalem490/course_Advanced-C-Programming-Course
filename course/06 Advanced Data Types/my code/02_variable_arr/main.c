#include <stdio.h>


void array(int size){
    char alpha[size];   
    int x = 0;

    while(x < size){
        alpha[x] = 'A' + x;
        printf("alpha is : %c\n",alpha[x]);.
        x++;
    }
}

int sum2d(int rows, int cols, int array[rows][cols]);  // array is a VLA

int main(){

    // check for #__STDC_NO_VLA__     , as if this macro is 1 in the compiler headers then it means that the compliler doesn't support VLA

    size_t rows = 0;
    size_t columns = 0; 

    printf("Enter the number of rows you want to store:");
    scanf("%zd", &rows);
    printf("eneter the number of columns in a row:");
    scanf("%zd", &columns);

    float beans[rows][columns]; // variable length arrays are allowed starting from C99 standard

    array(5);
    array(20);
    array(9);

    return 0;
}


int sum2d(int rows, int cols, int array[rows][cols]){
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            tot += array[r][c];
    
    return tot;
    
}