#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int num, sum = 0;
    printf("3자리 숫자를 입력하시오: ");
    scanf("%d", &num);

    sum = sum + num / 100; // 백의 자리
    sum = sum + (num / 10) % 10; // 십의 자리
    sum = sum + num % 10; // 일의 자리

    printf("%d의 자릿수 합은 %d입니다.\n", num, sum);

    return 0;
}