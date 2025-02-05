#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a==b && a==c) ? printf("Equilateral") : (a==b || b==c || a==c) ? printf("Isosceles") : printf("Scalene");
    
    return 0;
}