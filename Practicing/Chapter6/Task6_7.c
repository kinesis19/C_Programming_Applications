#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, sum = 0;

    for(i = 1; i <= 10; i++){
        sum = sum + i;
    }
    printf("1부터 10까지의 정수의 합 = %d\n", sum);

    return 0;
}