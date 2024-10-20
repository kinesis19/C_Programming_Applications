#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num1, num2, num3, largest;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    if(largest < num2) largest = num2;
    if(largest < num3) largest = num3;

    printf("가장 큰 정수는 %d입니다.\n", largest);

    return 0;
}