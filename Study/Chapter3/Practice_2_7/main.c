#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char model;
	int maxPerson, mileage, cost;
	float fuelEfficiency;

	printf("모델 : ");
	scanf("%c", &model);
	printf("승차인원 : ");
	scanf("%d", &maxPerson);
	printf("연비(km/l) : ");
	scanf("%f", &fuelEfficiency);
	printf("주행거리(km) : ");
	scanf("%d", &mileage);
	printf("가격 : ");
	scanf("%d", &cost);

	printf("\n자동차의 모델은 %c입니다.\n", model);
	printf("승차인원은 %d명입니다.\n", maxPerson);
	printf("연비는 %.2fkm/l 입니다.\n", fuelEfficiency);
	printf("주행거리는 %dkm입니다.\n", mileage);

	if (cost >= 10000) {
		int tempCost = cost / 10000;
		printf("가격은 %d만원입니다.\n", tempCost);
	}else{
		printf("가격은 %d원입니다.\n", cost);
	}


	return 0;
}