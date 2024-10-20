#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

    double num1, num2, num3;
    double sum = 0.0, avg, std_deviation, variance;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0;

    variance = (pow(num1 - avg, 2) + pow(num2 - avg, 2) + pow(num3 - avg, 2)) / 3.0;
    std_deviation = sqrt(variance);


    printf("평균: %.2lf\n", avg);
    printf("표준편차: %.2lf\n", std_deviation);


    return 0;
}