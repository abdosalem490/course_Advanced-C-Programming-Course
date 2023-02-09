#include <stdio.h>
#include<stdlib.h>

// exit() example
FILE *openFile (const char *file){
    FILE *inFile;

    if((inFile = fopen(file, "r")) == NULL){
        fprintf(stderr, "Can't open %s for reading.\n", file);
        exit(EXIT_FAILURE);
    }
    return inFile;
}


//atexit() example
void sign_off(void);
void too_bad(void);


void sign_off(void){
    puts("in sign_off...");
}

void too_bad(void){
    puts("in too_bad...");    
}

// qsort() example
int comp_ints(const void *p1, const void *p2){
    const int i1 = * (const int *) p1;
    const int i2 = * (const int *) p2;
    return i1 - i2;
}

int main(){

    // atexit() example
    int n;
    atexit(sign_off);   // register the sign_off() function
    puts("Enter an integer: ");

    if(scanf("%d", &n) != 1){
        puts("That's no integer!");
        atexit(too_bad);   // register the too_bad() function
        exit(EXIT_FAILURE);
    }

    // abort() example
    FILE *fp;
    fp = fopen("somefile.txt", "r");
    if(fp == NULL){
        printf("Going to close the program\n");
        abort();
    }

    printf("Going to close the file\n");
    fclose(fp);

    // qsort() example
    int data[5] = {54, 3, 12, 9, 24};
    int comp_ints(const void *, const void *);
    qsort(data, 5, sizeof(int), comp_ints);
    for(int i = 0; i < 5; i++)
        printf("%d\n", data[i]);

    return 0;
}

