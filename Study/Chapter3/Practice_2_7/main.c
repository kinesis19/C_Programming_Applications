#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char model;
	int maxPerson, mileage, cost;
	float fuelEfficiency;

	printf("�� : ");
	scanf("%c", &model);
	printf("�����ο� : ");
	scanf("%d", &maxPerson);
	printf("����(km/l) : ");
	scanf("%f", &fuelEfficiency);
	printf("����Ÿ�(km) : ");
	scanf("%d", &mileage);
	printf("���� : ");
	scanf("%d", &cost);

	printf("\n�ڵ����� ���� %c�Դϴ�.\n", model);
	printf("�����ο��� %d���Դϴ�.\n", maxPerson);
	printf("����� %.2fkm/l �Դϴ�.\n", fuelEfficiency);
	printf("����Ÿ��� %dkm�Դϴ�.\n", mileage);

	if (cost >= 10000) {
		int tempCost = cost / 10000;
		printf("������ %d�����Դϴ�.\n", tempCost);
	}else{
		printf("������ %d���Դϴ�.\n", cost);
	}


	return 0;
}