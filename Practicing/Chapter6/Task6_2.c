#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int i = 5, sum = 1;

    while(i >= 1){
        sum = sum * i;
        i--;
    }

    printf("%d\n", sum);

    return 0;
}