#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i = a; i>0; i--){
        if (i==a && i==1){
            for (int j = 0; j<a; j++){
                printf("*");
            }
        }
        else{
            for (int j = 0; j<a; j++){
                if (j==0 && j==a-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}