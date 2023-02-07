#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *fp = NULL;
    fp = fopen("somefile.text", "w");
    if(fp == NULL)
        exit(1);
    fputs("Hello there, I hope this article will help!", fp);
    fclose(fp);

    char string[40];
    strcpy(string, "hello, how are you");
    puts(string);

    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if(buffer == NULL){
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer, &bufsize, stdin);

    printf("%zu characters were read.\n", characters);
    printf("You tyoeed : '%s'\n", buffer);

    char buf[255];
    int ch;
    char *p;

    if(fgets(buf, sizeof(buf), stdin)){
        p = strchr(buf, '\n');
        if(p){
            *p = '\0';
        }
        else{
            while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin)); 
        }
    } else {
        /*fgets failed, handle error*/
    }

    printf("our buffer contains %s\n", buf);

    return 0;
}
