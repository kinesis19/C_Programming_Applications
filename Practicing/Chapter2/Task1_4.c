#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int salary, workDay, transportation, foodCosts, allowance, saveMoney = 0;

	printf("월급을 입력하시오: ");
	scanf("%d", &salary);
	printf("한 달에 며칠이나 출근하나요? (일): ");
	scanf("%d", &workDay);
	printf("하루 교통비를 입력하시오: ");
	scanf("%d", &transportation);
	printf("하루 식비를 입력하시오: ");
	scanf("%d", &foodCosts);
	printf("하루 용돈을 입력하시오: ");
	scanf("%d", &allowance);

	saveMoney = salary - (workDay * (transportation + foodCosts + allowance));

	printf("저축액: %d\n", saveMoney);

	return 0;
}