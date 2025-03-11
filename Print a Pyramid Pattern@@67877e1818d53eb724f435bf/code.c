#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i = a; i>0; i--){
        for (int k = i; k>1; k--){
            printf(" ");
        }
        for (int j = 0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}