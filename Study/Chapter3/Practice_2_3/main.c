#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double num1, num2, num3, sum = 0, avg = 0, stdDeviation, variance, mean;

	printf("3���� �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = (num1 + num2 + num3);
	avg = sum / 3;

	// Getting Standard deviation:
	mean = sum / 3;
	variance = ((pow(num1 - mean, 2)) + (pow(num2 - mean, 2)) + (pow(num3 - mean, 2))) / 3;
	stdDeviation = sqrt(variance);


	printf("��� : %.2lf\n", avg);
	printf("ǥ������ : %.2lf", stdDeviation);

	return 0;
}