#include <stdio.h>

int main() {
    int binary[32], i = 0, n, b = 1, bits = 0, check = 0;
    scanf("%d", &n);
    
    while (n > 0){
        binary[i] = n%2;
        n = n/2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--){
        for (int k = 0; k<j; k++){
            b *= 10;
        }
        bits += binary[j]*b;
    }
    check = n & 1;
    for (int l = 0; l<i; l++){
        if (binary[l]==check){
            printf("%d", l);
            break;
        }
        else {
            continue;
        }
    }

    return 0;
}