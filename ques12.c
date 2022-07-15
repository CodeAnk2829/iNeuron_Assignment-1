#include <stdio.h>
int main(){
    int x = printf("iNeuron");
    printf("%d",x);
    return 0;
}
//output : first iNeuron is printed by the first printf and then garbage value will be printed due to second printf
// iNeuron8