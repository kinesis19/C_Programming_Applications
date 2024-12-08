#include <stdio.h>
#include <math.h>

int get_points(float x, float y);

int main () {

    float x, y;
    printf("다트의 x, y 좌표를 입력하세요: ");
    scanf("%f %f", &x, &y);

    int points = get_points(x, y);
    printf("다트는 %d점을 획득했습니다.\n", points);

    return 0;
}

int get_points(float x, float y) {
    float distance = sqrt(x * x + y * y);

    if (distance > 10) {
        return 0;
    } else if (distance > 5) {
        return 1;
    } else if (distance > 1) {
        return 5;
    } else {
        return 10;
    }
}