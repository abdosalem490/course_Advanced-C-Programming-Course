#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 41


int main(){

    FILE *fp = NULL;
    char buff[MAX];
    if(fp = fopen("data.txt", "a+") == NULL){
        fprintf(stdout, "Can't open file.\n");
        exit(1);
    }

    while(fscanf(fp, "%s", buff) != EOF){
        pritnf("%s ", buff);
    }
    fclose(fp);



    FILE *f = NULL;
    char ch[100];

    // open the file of read and write operation
    if((f = fopen("myFile.txt", "r+")) == NULL){
        printf("Cannot open the file ...");
        exit(1);
    }

    for (int i = 0; i < 10; i++){
        // enter the strings with values in the file
        fprintf(f, " The cpimt number is %d\n", i+1);
    }
    fclose(f);

    // open the file of read and write operation
    if((f = fopen("myFile.txt", "r+")) == NULL){
        printf("Cannot open the file ...");
        exit(1);
    }

    printf("File content is --\n");
    printf("\n................................................print the strings.......................................................\n\n");
    while(!feof(f)){
        fgets(ch, 100, f);
        printf("%s", ch);
    }
    

    char string[100];
    sprintf(string, "Hello, This is the number: %d", 55);
    puts(string);
    int a = 10, b = 20, c = 0;
    int sum = a + b;
    sprintf(string, "Sum of %d and %d is %d", a, b, c);
    puts(string);



    return 0;
}
