#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void) {

    int dice;
    
    srand((unsigned int )time(NULL));
    dice = rand() % 6 + 1;
    printf("%d 값이 나왔습니다!\n", dice);

    return 0;
}