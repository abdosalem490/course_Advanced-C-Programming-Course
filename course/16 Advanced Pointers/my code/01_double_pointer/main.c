#include <stdio.h>
#include <malloc.h>
#include <string.h>

void foo1(char **ptr){
    *ptr = malloc(255);
    strcpy(*ptr, "Hello World");
}

void foo(int **ptr){
    int a = 5;
    *ptr = &a;
}

int main(){
    int a = 10;

    int *p1 = NULL;
    int **p2 = NULL;

    p1 = &a;
    p2 = &p1;

    printf("Address of a = %u\n", &a);
    printf("Address of p1 = %u\n", &p1);
    printf("Address of p2 = %u\n\n",&p2);

    // below print statment will give the adress of 'a'
    printf("Value at the address stored by p2 = %u\n", *p2);
    printf("Value at the address stored by p1 = %d\n\n", *p1);
    printf("Value of **p2 = %d\n\n\n\n", **p2); // read this *(*p2)


    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    foo(&ptr);

    printf("%d\n\n\n\n\n", *ptr);

    char *ptr1 = NULL;
    foo1(&ptr1);
    printf("%s\n", ptr1);
    free(ptr1);

    return 0;
}
