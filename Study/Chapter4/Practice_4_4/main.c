#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int money, price, changeMoney, tempChangeMoney, cntMoney100 = 0, cntMoney10 = 0, cntMoney1 = 0;

	printf("������� �����ݰ� ������ ������ ������ �Է��ϼ��� : ");
	scanf("%d %d", &money, &price);

	changeMoney = money - price;
	printf("\n������� ������ : %d\n���Ÿ� ����ϴ� ������ ���� : %d\n�Ž����� : %d\n", money, price, changeMoney);

	tempChangeMoney = changeMoney;

	cntMoney100 = tempChangeMoney / 100;
	tempChangeMoney = tempChangeMoney - (cntMoney100 * 100);
	cntMoney10 = tempChangeMoney / 10;
	tempChangeMoney = tempChangeMoney - (cntMoney10 * 10);
	cntMoney1 = tempChangeMoney / 1;
	tempChangeMoney = tempChangeMoney - (cntMoney1 * 1);

	printf("\n100�� ������ ���� : %d\n10�� ������ ���� : %d\n1�� ������ ���� : %d\n", cntMoney100, cntMoney10, cntMoney1);

	return 0;
}