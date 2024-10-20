#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int input, computerChoise, cnt = 0;

    srand(time(NULL));
    computerChoise = rand() % 100;

    do{
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &input);

        if(input < computerChoise){
            printf("제시한 정수가 낮습니다.\n");
        }else if(input > computerChoise){
            printf("제시한 정수가 높습니다.\n");
        }
        cnt++;

    }while(input != computerChoise);

    printf("축하합니다. 시도횟수 = %d\n", cnt);

    return 0;
}