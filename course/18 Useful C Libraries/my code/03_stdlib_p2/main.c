#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char a[10] = "100";
    char b[10] = "3.14";
    char c[10] = "100000000";

    int value = atoi(a);
    float value1 = atof(b);
    long value2 = atol(c);

    sprintf(a, "%d", 45);

    printf("Value = %d\n", value);
    printf("Value = %f\n", value1);
    printf("Value = %ld\n", value2);
    printf("Value = %s\n", a);

    char d[] = "123.456xyz", *end;
    double value3 =  strtod(d, &end);
    printf("Value = %lf\n", value3);

    char e[] = "365.25 7.0", *end1;
    float value4 = strtof(e, &end1);
    float value5 = strtof(end1, NULL);
    printf("Value4 = %f, Value5 = %f\n", value4, value5);

    char str[30] = "2030300 This is test";
    char *ptr;
    long ret;
    ret = strtol(str, &ptr, 10);
    printf("The number(unsigned long integer) is %ld\n", ret);
    printf("String part is |%s|\n", ptr); 

    // this program will create same sequence of random number on every program run
    for(int i = 0; i < 5; i++)
        printf(" %d ", rand()); 
    printf("\n");

    srand(time(0));
    for(int i = 0; i < 10; i++)
        printf(" %d ", rand()%5 + 1); // generate random numbers from 1 to 5 
    printf("\n");    

    return 0;
}

