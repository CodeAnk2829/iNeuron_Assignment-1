//Program to take time as an input in a given format (HH:MM) and display as HH hour and MM minute
#include <stdio.h>
int main(){
    int hr, min;
    printf("Enter time in the given format (HH:MM)\n");
    scanf("%d:%d", &hr, &min);
    printf("%d hour and %d minute", hr, min);
    return 0;
}