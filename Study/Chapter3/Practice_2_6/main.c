#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name;
	int stdNum, grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0;
	float avgGrade = 0;

	printf("�̸� : ");
	scanf("%c", &name);
	printf("�й� : ");
	scanf("%d", &stdNum);
	printf("���� : ");
	scanf("%d %d %d %d", &grade1, &grade2, &grade3, &grade4);
	avgGrade = (grade1 + grade2 + grade3 + grade4) / 4.0;
	printf("�л�%c(�й� : %d)�� ��� ������ %.2f�Դϴ�.", name, stdNum, avgGrade);
	return 0;
}