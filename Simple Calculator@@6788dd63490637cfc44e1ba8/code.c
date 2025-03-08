#include <stdio.h>

int main(void){
    int a,b;
    char c;
    scanf("%d %d %s", &a, &b, &c);

    int plus = strcmp(c, '+');
    int minus = strcmp(c, '-');
    int multi = strcmp(c, '*');
    int divi = strcmp(c, '/');

    if (plus==0){
        printf("%d", a+b);
    }
    else if (minus==0){
        printf("%d", a-b);
    }
    else if (multi==0){
        printf("%d", a*b);
    }
    else if (divi==0){
        printf("%d", a/b);
    }

    return 0;
}