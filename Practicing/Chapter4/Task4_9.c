#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a = 10, b = 3, c = 2;

    int result = a * b / c + b % c - a / b;
    printf("결과값 = %d\n", result);

    return 0;
}