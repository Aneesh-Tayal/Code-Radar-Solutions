#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    (a>0 && a<101) ? printf("In Range") : printf("Out of Range");

    return 0;
}