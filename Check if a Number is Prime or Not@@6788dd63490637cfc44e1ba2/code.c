#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a;
    scanf("%d", &a);
    bool x = false;

    for (int i = 2; i<a; i++){
        if (a%i==0){
            x = true;
        }
    }

    if (x==true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}