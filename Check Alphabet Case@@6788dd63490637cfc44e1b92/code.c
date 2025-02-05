#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    (isalpha(a)==0) ? printf("Not an alphabet") : (islower(a)==0) ? printf("Uppercase") : printf("Lowercase");
    
    return 0;
}