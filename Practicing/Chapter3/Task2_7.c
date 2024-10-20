#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char modelName;
    unsigned char passengers; // Maximum: 100
    float fuelEfficiency, mileage;
    unsigned long long cost;

    printf("모델: ");
    scanf("%c", &modelName);

    printf("승차인원: ");
    // %hhu: unsigned char의 형식 지정자. short를 사용한다면 %hi
    scanf("%hhu", &passengers);

    printf("연비(km/l): ");
    scanf("%f", &fuelEfficiency);

    printf("주행거리(km): ");
    scanf("%f", &mileage);

    printf("가격 (원): ");
    scanf("%llu", &cost);

    printf("자동차의 모델은 %c입니다.\n", modelName);
    printf("승차인원은 %d명입니다.\n", passengers);
    printf("연비는 %.1fkm/l입니다.\n", fuelEfficiency);
    printf("주행거리는 %.0fkm입니다.\n", mileage);
    printf("가격은 %llu만원입니다.\n", cost / 10000);



    return 0;
}