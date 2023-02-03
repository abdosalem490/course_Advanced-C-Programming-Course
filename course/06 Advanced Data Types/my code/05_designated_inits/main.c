#include <stdio.h>

struct point {int x, y;};


int main(){

    int numbers[100] = {1, 2, 3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50, [42] = 400};
    for (int i = 0; i < 20; i++)
        printf("%d ", numbers[i]);
    
    printf("\n%d", numbers[70]);
    printf(" %d", numbers[42]);

    int n = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d", n);

    struct point p1 = {.y=2, .x = 3};
    struct point p2 = {y: 2, x: 3};
    struct point p = {2, 3};

    struct point pt[5] = {[2].y = 5, [2].x = 6, [0].x = 2};

    return 0;
}
