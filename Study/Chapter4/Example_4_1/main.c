#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1, num2;
	
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	printf("%d�� %d�� ���� ���� %d, �������� %d�Դϴ�.\n", num1, num2, num1 / num2, num1 % num2);

	return 0;
}