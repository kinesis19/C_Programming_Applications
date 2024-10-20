#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num, digit;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    while(num > 0){
        digit = num % 10;
        printf("%d ", digit);
        num = num / 10;
    }

    return 0;
}