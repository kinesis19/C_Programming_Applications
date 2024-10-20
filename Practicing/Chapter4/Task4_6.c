#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int year, result;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        result = 1;
    }else{
        result = 0;
    }

    printf("윤년여부 = %d\n", result);

    return 0;
}