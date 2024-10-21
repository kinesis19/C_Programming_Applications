#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int b = 0, b1 = 0, b2 = 0;
    int c = 0, c1 = 0, c2 = 0;

    srand(time(NULL));

    while(1){
        b1 = rand() % 6;
        b2 = rand() % 6;
        if(b1 == 1 && b2 == 1) break;
        b++;
    }


    while(1){
        c1 = rand() % 6;
        c2 = rand() % 6;
        if(c1 == 1 && c2 == 1) break;
        c++;
    }

    if(b > c) printf("c승리 b횟수 = %d c횟수 = %d\n", b, c);
    else printf("b승리 b횟수 = %d c횟수 = %d\n", b, c);
    return 0;
}