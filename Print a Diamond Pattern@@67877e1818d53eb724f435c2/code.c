#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i = a; i>0; i--){
        for (int k = i; k>1; k--){
            printf(" ");
        }
        for (int j = 0; j<=a-i; j++){
            printf("*");
        }
        for (int l = 1; l<=a-i; l++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = a; i>1; i--){
        for (int k = 0; k<a-i; k++){
            printf(" ");
        }
        for (int j = i/2; j>=0; j--){
            printf("*");
        }
        for (int l = i/2; l>0; l--){
            printf("*");
        }
        printf("\n");
    }
}