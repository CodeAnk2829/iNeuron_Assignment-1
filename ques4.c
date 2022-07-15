//Program to calculate Area of a Circle
#include <stdio.h>
int main(){
    int r;
    float area;
    printf("Enter the radius of a cicle\n");
    scanf("%d", &r);
    area = (3.14 * r * r);
    printf("Area of circle is %.2f having radius %d", area , r);
    return 0;
}