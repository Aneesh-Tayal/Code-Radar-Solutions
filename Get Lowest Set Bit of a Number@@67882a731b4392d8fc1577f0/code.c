#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    (a & 1) ? printf("1") : printf("0");
    
    return 0;
}