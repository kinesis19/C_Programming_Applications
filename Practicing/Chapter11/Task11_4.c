#include <stdio.h>
#include <math.h>

struct points {
    int x;
    int y;
};

int main() {

    struct points p1, p2;
    int xDiff, yDiff;
    double dist;

    printf("점1의 좌표를 입력하시오 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("점2의 좌표를 입력하시오 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    xDiff = p1.x - p2.x;
    yDiff = p1.y - p2.y;

    dist = sqrt((double)(xDiff * xDiff + yDiff * yDiff));

    printf("두 점의 거리는 %.2f이다.\n", dist);

    return 0;
}