//Program to print user's name in the given format ("Hello! Ankit Kumar")
#include <stdio.h>
int main(){
    char str[30];
    printf("Enter your name\n");
    gets(str);
    printf("\"Hello! %s\"", str);
    return 0;
}