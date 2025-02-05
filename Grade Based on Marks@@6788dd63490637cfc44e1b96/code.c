#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    (a>=90) ? printf("A") : (a>=80) ? printf("B") : (a>=70) ? printf("C") : (a>=60) ? printf("D") : printf("F");
    
    return 0;
}