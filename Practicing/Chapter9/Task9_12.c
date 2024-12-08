#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int n, r, b[6] = { 0, }, p = 0;

    srand((unsigned)time(NULL));

    b[0] = rand() % 45 + 1;
    p++;
    printf("%d ", b[0]);

    for (int i = 0; i < 6; i++) {
        r = rand() % 45 +1;
        for (int j = 0; j < p; j++) {
            if (b[j] != r) {
                b[i] = r;
                p++;
                printf("%d ", r);
            } else {
                i--;
                break;
            }
        }
    }


    return 0;
}