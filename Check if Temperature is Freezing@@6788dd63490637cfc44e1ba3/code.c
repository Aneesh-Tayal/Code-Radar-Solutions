#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    (a<1) ? printf("Freezing") : printf("Above Freezing");

    return 0;
}