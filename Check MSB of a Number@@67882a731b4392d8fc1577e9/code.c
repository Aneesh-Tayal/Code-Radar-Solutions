#include <stdio.h>
#define BITS sizeof(int) * 8

int main() {
    long a, msb;
    scanf("%ld", &a);

    msb = 1 << (BITS - 1);

    (num & msb) ? printf("Set") : printf("Not Set");
    
    return 0;
}