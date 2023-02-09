#include <stdio.h>

/*send(void *pData, int nLength);
char *data = "blah";
send(data, strlen(data));*/



int main(){
    int i = 10;
    float f = 2.34;
    char ch = 'k';
    
    void *vptr = NULL;

    vptr = &i;
    printf("Value of i = %d\n", *(int*)vptr);
    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);

    int aiData[3] = {100, 200, 300};

    void *pvData = &aiData[1];  // address of 200

    pvData += sizeof(int);

    printf("%d", *(int *)pvData);

    return 0;
}
