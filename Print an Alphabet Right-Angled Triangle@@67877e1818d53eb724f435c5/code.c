#include <stdio.h>

int main(){
    char ch;
    int a;
    scanf("%d", &a);

    for (int i = 1; i<=a; i++){
        ch = 'A';
        for (int j = 1; j<=i; j++){
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }

    return 0;
}