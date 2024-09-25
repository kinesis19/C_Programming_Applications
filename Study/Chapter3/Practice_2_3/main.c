#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double num1, num2, num3, sum = 0, avg = 0, stdDeviation, variance, mean;

	printf("3개의 실수를 입력하세요 : ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = (num1 + num2 + num3);
	avg = sum / 3;

	// Getting Standard deviation:
	mean = sum / 3;
	variance = ((pow(num1 - mean, 2)) + (pow(num2 - mean, 2)) + (pow(num3 - mean, 2))) / 3;
	stdDeviation = sqrt(variance);


	printf("평균 : %.2lf\n", avg);
	printf("표준편차 : %.2lf", stdDeviation);

	return 0;
}