#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i = a; i>0; i--){
        for (int k = i; k>0; k--){
            printf(" ");
        }
        for (int j = 0; j<2*i; j++){
            printf("*");
            j++;
        }
        printf("\n");
    }
}