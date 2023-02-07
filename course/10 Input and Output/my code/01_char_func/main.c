#include <stdio.h>

int main(){

    char ch = '\0';
    FILE *fp;
    if(fp = fopen("somefile.c", "rw"))
    {
        ch = getc(fp);

        while(ch != EOF){
            ch = getc(fp);
        }

        fclose(fp);
    }

    ch = getc(stdin);
    printf("read in character %c\n", ch);
    
    printf("%c\n", getchar());
    
    while (isspace(ch = (char) getchar())) // REad as long as there are space
    {
        ungetc(ch, stdin);  // Put back the nonspace character
        printf("char is %c\n", getchar());
    }

    ch = 'd';
    putc(ch, stdout);
    putchar(getchar());

    int i = 0;
    char string[] = "Hello jason, \nwhatever!";
    while(string[i] != '\0'){
        if(string[i] != '\n'){
            putchar(string[i]);
            i++;
        }
    }       

    fputc('f', stdout);

    return 0;
}
