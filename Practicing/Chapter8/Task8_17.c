#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int n, r;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 6; i++) {
        r = rand() % 45 + 1; // 로또는 숫자 1부터 ~ 45까지 존재함. 따라서 rand() % 45 + 1로 로직을 변경해 줘야 함.
        printf("%d, ", r);
    }

}