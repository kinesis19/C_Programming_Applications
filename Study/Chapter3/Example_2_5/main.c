#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch;
	printf("문자를 입력하세요 : ");

	ch = getchar();
	printf("%c의 ASCII CODE : %d", ch, ch);

	return 0;
}