#include <stdio.h>

int main(){

    auto int x; // local variable (auto)

    int m;  // m is in scope (implicitly auto var)
    scanf("%d", &m);
    {
        int i;  // both m and i in scope (auto var)

        int n = 5;  // (implicitly auto var)
        for(i = m; i < n; i++){
            int i; // -> can cause redefinition error in some compilers
        }
    }

    return 0;
}

char *myFunction(){
    char x[] = "apple"; // impllicitly auto 
    
    return x;
}

int func_name(){
    int y;  // local variable (implicitly auto var)

    return y;
}