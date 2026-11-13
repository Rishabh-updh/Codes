#include <stdio.h>

int main() {
    FILE * fptr = fopen("test.txt" , "r");
    // char input[100];
    // fgets(input , 100 , fptr);
    // puts(input);
    // fputs("my brother is doing BTech \n" , fptr);
    char ch ;
    while(!feof(fptr)){
        ch = fgetc(fptr);
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}