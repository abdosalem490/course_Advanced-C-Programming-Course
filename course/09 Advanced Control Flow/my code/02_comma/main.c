#include <stdio.h>

int main(){

    int i = 0;
    int x, y, z = 10;
    int sum = 0;
    int data[100] = {[1 ... 99] = 50};
    while(i < 100)
        sum += data[i], ++i; // comma can be used here to separate statements

    int l(5,10); // this means that 10 is assigned to l
    int j = (f1(), f2()); 

    x = (y = 3, (z = ++y + 2) + 5); 

    for(i = 0, j= 100; i !=10; ++i, j-=10);

    printf("json"),
    printf("Fedin"),
    printf("Done");

    int houseprice = 249,500; // this is equivalent to houseprice = 249; 500; which will assign 249 to the variable eventually


    char ch, date; // equvalent to char ch; char date;
    int a = 1, b = 2; // equivalent to int a =1; int b = 2;

    return 0;
}
