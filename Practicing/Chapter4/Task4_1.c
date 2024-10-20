#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num1, num2;
    printf("두 양의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("%d를 %d로 나눈 몫은 %d, 나머지: %d\n", num1, num2, num1 / num2, num1 % num2);

    return 0;
}