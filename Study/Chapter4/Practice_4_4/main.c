#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int money, price, changeMoney, tempChangeMoney, cntMoney100 = 0, cntMoney10 = 0, cntMoney1 = 0;

	printf("사용자의 소지금과 구매할 물건의 가격을 입력하세요 : ");
	scanf("%d %d", &money, &price);

	changeMoney = money - price;
	printf("\n사용자의 소지금 : %d\n구매를 희망하는 물건의 가격 : %d\n거스름돈 : %d\n", money, price, changeMoney);

	tempChangeMoney = changeMoney;

	cntMoney100 = tempChangeMoney / 100;
	tempChangeMoney = tempChangeMoney - (cntMoney100 * 100);
	cntMoney10 = tempChangeMoney / 10;
	tempChangeMoney = tempChangeMoney - (cntMoney10 * 10);
	cntMoney1 = tempChangeMoney / 1;
	tempChangeMoney = tempChangeMoney - (cntMoney1 * 1);

	printf("\n100원 동전의 개수 : %d\n10원 동전의 개수 : %d\n1원 동전의 개수 : %d\n", cntMoney100, cntMoney10, cntMoney1);

	return 0;
}