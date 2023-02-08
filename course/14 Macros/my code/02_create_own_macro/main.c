#include <stdio.h>

#define PI 3.14
#define CIRCLE_AREA(X) ((PI) * (X) * (X)) 

#define Warning(...) fprintf(stderr, __VA_ARGS__)

#define FOO BAR
#define BAR (12)

#define MISC(x)  (puts("imcrementing", (x)++))

#define MAX(a, b)  ((a) > (b) ? (a) : (b))

#define upTo(i, n)  for((i) = 0; (i) < (n); (i)++)

int main(){

    int c = 5;

    int area = CIRCLE_AREA(c + 2);

    printf("area = %d\n", area);

    Warning("%s: this program is here\n", "Jason");

    upTo(i, 10);

    return 0;
}
