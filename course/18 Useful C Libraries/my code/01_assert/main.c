#include <stdio.h>
#include <math.h>
#include <assert.h>


//static_assert(CHAR_BIT == 16, "16-bit char falasely assumed");

int main(){
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");
    while(scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0)){
        z = x * x - y * y; // should be + *
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done");

    /*int y = 5;

    for(int x = 0; x < 20; ++x){
        printf("x = %d y = %d\n", x, y);
        assert(x < y);
    }*/
    return 0;
}
