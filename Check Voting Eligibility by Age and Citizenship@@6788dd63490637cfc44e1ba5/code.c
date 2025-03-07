#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    (a>=18 && b==1) ? printf("Eligible") : printf("Not Eligible");

    return 0;
}