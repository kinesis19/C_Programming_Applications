#define _CRT_SECURE_NO_WARNINGS
#define KMH_TO_MS (1000/3600.0);
#include <stdio.h>

int main() {

	double distance, speed, time;

	// �ð� = �Ÿ� / �ӷ�
	distance = 18.4;
	speed = 160 * KMH_TO_MS;
	time = distance / speed;

	printf("���ӱ��� Ȩ�÷���Ʈ�� �����ϴ� �� �ɸ��� �ð� : %lf��", time);


	return 0;
}