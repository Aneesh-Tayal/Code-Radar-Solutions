#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    (islower(a)!=0) ? printf("Uppercase") : printf("Lowercase");
    
    return 0;
}