#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main() {
    
    int i, j;
    int ary[SIZE] = { 0, };

    srand(time(NULL)); // 난수 생성을 위한 seed 설정

    for (i = 0; i < 100; i++) {
        int result = rand() % SIZE; // 주사위 값 생성
        ary[result]++; // 주사위 값이 나올 때마다 배열 요소에 1 추가
    }


    for (i = 0; i < SIZE; i++) {
        printf("%d: %d번\n", i, ary[i]);
    }

    return 0;
}