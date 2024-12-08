#include <stdio.h>
#include <math.h>

int main () {

    double num, result;

    printf("실수를 입력하시오: ");
    scanf("%lf", &num);

    result = sqrt(num);
    printf("%.2lf의 제곱근은 %.2lf입니다.\n", num, result);

    return 0;
}