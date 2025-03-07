#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a;
    scanf("%d", &a);
    bool x = false;

    for (let i = 2; i<a; i++){
        if (a%i==0){
            x = true;
        }
    }

    printf("x");

    return 0;
}