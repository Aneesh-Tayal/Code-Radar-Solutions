#include <ctype.h>
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U') ? printf("Vowel") : (!isdigit(a)) ? printf("Consonant") : (isdigit(a)) ? printf("Digit") : printf("Special Character");
    
    return 0;
}