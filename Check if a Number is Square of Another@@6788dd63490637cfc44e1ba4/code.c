#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int x = b*b;
    if (a==x){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}