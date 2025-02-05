#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = 1<<b;
    a = ((a & ~c)|(c << b));
    printf("%d", a);
    
    return 0;
}