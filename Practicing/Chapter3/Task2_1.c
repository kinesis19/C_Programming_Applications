#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n1, n2;

    printf("정수형 int의 크기는 %zu입니다.\n", sizeof(int));
    printf("정수형 long의 크기는 %zu입니다.\n", sizeof(long));
    printf("정수형 long long의 크기는 %zu입니다.\n", sizeof(long long));

    printf("정수를 입력하시오 (10진수): ");
    scanf("%d", &n1);
    printf("%d는 10진수로 %d, 8진수로 %#o, 16진수로 %#x입니다.\n", n1, n1, n1, n1);


    printf("정수를 입력하시오 (16진수): ");
    scanf("%x", &n2);
    printf("%d는 10진수로 %d, 8진수로 %#o, 16진수로 %#x입니다.\n", n2, n2, n2, n2);

	return 0;
}