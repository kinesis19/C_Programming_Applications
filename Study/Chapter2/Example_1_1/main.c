#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x, y;

	printf("정수 2개를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	printf("%d + %d = %d입니다.\n", x, y, x + y);
	printf("%d - %d = %d입니다.\n", x, y, x - y);
	printf("%d * %d = %d입니다.\n", x, y, x * y);
	printf("%d / %d = %d입니다.\n", x, y, x / y);

	return 0;
}