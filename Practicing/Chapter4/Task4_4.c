#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int inputMoney, cost, payBack;
    int coin100, coin10, coin1;

    printf("투입한 돈: ");
    scanf("%d", &inputMoney);

    printf("물건 값: ");
    scanf("%d", &cost);

    payBack = inputMoney - cost;

    printf("거스름돈: %d\n", payBack);

    coin100 = payBack / 100; // 100원 동전의 개수
    payBack = payBack % 100; // 남은 거스름돈

    coin10 = payBack / 10; // 10원 동전의 개수
    payBack = payBack % 10; // 남은 거스름돈

    coin1 = payBack; // 1원 동전의 개수

    printf("100원의 동전 개수: %d\n", coin100);
    printf("10원의 동전 개수: %d\n", coin10);
    printf("1원의 동전 개수: %d\n", coin1);


    return 0;
}