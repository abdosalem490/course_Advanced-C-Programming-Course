#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void){
    
    // system() example
    char command[50];
    strcpy(command, "ls -l");
    system(command);

    // getenv
    char *str = NULL;
    assert((str = getenv("PATH")) != NULL);
    printf("Value of\"PATH Environment Variable\" : %s\n", str);

    // strdup
    char *p1 = "Jason";
    char *p2;
    p2 = strdup(p1);
    printf("Duplicated string is : %s\n", p2);

    char source[] = "Jason";
    // 5 bytes of source are copied to a new memory allocated dynamically and pointer tro copied memory is returned
    char *target = strndup(source, 2);
    printf("%s\n", target); 

    return 0;
}

