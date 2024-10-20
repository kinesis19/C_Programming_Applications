#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // 1000mm = 1m
    int mm = 1, cnt = 0;

    while(mm < 8800000){
        mm = mm * 2;
        cnt++;
    }
    printf("종이 접는 횟수 = %d\n", cnt);

    return 0;
}