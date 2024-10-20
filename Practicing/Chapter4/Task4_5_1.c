#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n1, n2;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &n1, &n2);

    printf("%d == %d의 결과값: %d\n", n1, n2, n1 == n2);
    printf("%d != %d의 결과값: %d\n", n1, n2, n1 != n2);
    printf("%d > %d의 결과값: %d\n", n1, n2, n1 > n2);
    printf("%d < %d의 결과값: %d\n", n1, n2, n1 < n2);
    printf("%d >= %d의 결과값: %d\n", n1, n2, n1 >= n2);
    printf("%d <= %d의 결과값: %d\n", n1, n2, n1 <= n2);

    return 0;
}