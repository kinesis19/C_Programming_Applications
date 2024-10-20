#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int year = 2024;
    long long people = 7900000000;
    long long opeople = 10000000000;
    double ir = 0.01;

    // while(people <= opeople){
    //     people = people + people * ir;
    //     year++;
    // }

    for(; people <= opeople; year++){
        people = people + people * ir;
    }


    printf("%d년에 세계 인구가 100억 명을 돌파합니다.\n", year);

    return 0;
}