#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    (((a%4==0) && (a%100!=0)) || (a%400==0)) ? printf("Leap Year") : printf("Not a Leap Year");
    
    return 0;
}