#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f", &a);
    printf("You entered: %.1f", a);
    return 0;
}