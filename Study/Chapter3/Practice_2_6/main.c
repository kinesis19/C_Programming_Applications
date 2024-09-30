#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name;
	int stdNum, grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0;
	float avgGrade = 0;

	printf("이름 : ");
	scanf("%c", &name);
	printf("학번 : ");
	scanf("%d", &stdNum);
	printf("성적 : ");
	scanf("%d %d %d %d", &grade1, &grade2, &grade3, &grade4);
	avgGrade = (grade1 + grade2 + grade3 + grade4) / 4.0;
	printf("학생%c(학번 : %d)의 평균 성적은 %.2f입니다.", name, stdNum, avgGrade);
	return 0;
}