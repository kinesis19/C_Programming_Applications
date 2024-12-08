#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int n, r;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 6; i++) {
        r = rand() % 46;
        printf("%d, ", r);
    }

}