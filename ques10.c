//Program to print date in the given format (DD/MM/YYYY)
#include <stdio.h>
int main(){
    int date, month, year;
    printf("Enter date, month and year in the given format (DD/MM/YYYY)\n");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("Day - %d Month - %d Year - %d", date , month , year);
    return 0;
}