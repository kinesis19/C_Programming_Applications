#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int salary, workDays, payTransportation, payFood, payPinMoney, saveMoney = 0;

	printf("월급을 입력하세요 : ");
	scanf("%d", &salary);

	printf("한 달에 며칠이나 출근하나요(일) : ");
	scanf("%d", &workDays);

	printf("하루 교통비를 입력하세요 : ");
	scanf("%d", &payTransportation);


	printf("하루 식비를 입력하세요 : ");
	scanf("%d", &payFood);

	printf("하루 용돈을 입력하세요 : "); // 여기서 용돈은 내가 받는 용돈이 아닌, 다른 누군가에게 주는 용돈이다..
	scanf("%d", &payPinMoney);



	saveMoney = salary - (workDays * (payTransportation + payFood + payPinMoney));
	printf("저축액은 다음과 같습니다 : %d", saveMoney);


	return 0;
}