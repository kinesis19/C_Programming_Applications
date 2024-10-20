#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num, fact = 1, i;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        fact = fact * i;
    }


    printf("%d!은 %d입니다.\n", num, fact);

    return 0;
}