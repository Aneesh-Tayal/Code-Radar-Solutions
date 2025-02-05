#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Product: %d", a*b);
    
    return 0;
}