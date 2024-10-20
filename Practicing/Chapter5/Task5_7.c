#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

    float x, y;
    int points;

    printf("다트의 x, y 좌표를 입력하시오: ");
    scanf("%f %f", &x, &y);

    float dist = sqrt(x * x + y * y);
    
    if(dist > 10) points = 0;
    else if(dist > 5) points = 1;
    else if(dist > 1) points = 5;
    else points = 10;

    printf("획득한 점수: %d\n", points);

    return 0;
}