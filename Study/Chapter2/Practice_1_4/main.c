#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int salary, workDays, payTransportation, payFood, payPinMoney, saveMoney = 0;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &salary);

	printf("�� �޿� ��ĥ�̳� ����ϳ���(��) : ");
	scanf("%d", &workDays);

	printf("�Ϸ� ����� �Է��ϼ��� : ");
	scanf("%d", &payTransportation);


	printf("�Ϸ� �ĺ� �Է��ϼ��� : ");
	scanf("%d", &payFood);

	printf("�Ϸ� �뵷�� �Է��ϼ��� : "); // ���⼭ �뵷�� ���� �޴� �뵷�� �ƴ�, �ٸ� ���������� �ִ� �뵷�̴�..
	scanf("%d", &payPinMoney);



	saveMoney = salary - (workDays * (payTransportation + payFood + payPinMoney));
	printf("������� ������ �����ϴ� : %d", saveMoney);


	return 0;
}