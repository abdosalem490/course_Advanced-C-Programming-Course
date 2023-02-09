#include <stdio.h>

int sumdisplay();

typedef void FuncType(int);

void func1(int);
void func2(int);



int main(){

    int (*func_ptr)();
    func_ptr = sumdisplay;
    printf("\nADdress of function somedisplay = %p\n", func_ptr);
    (*func_ptr)();

    FuncType *func_ptr1 = NULL;
    func_ptr1 = func1;
    (*func_ptr1)(100);

    func_ptr1 = func2;
    (*func_ptr1)(200);

    return 0;
}

int sumdisplay(){
    printf("\n--Display some texts--\n");
    return 0;
}

void func1(int testarg){
    printf("func1 got an argument of %d\n", testarg);
}

void func2(int testarg){
    printf("func2 got an argument of %d\n", testarg);
}
