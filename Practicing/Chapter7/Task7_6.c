#include <stdio.h>

int main() {

    int i, j;
    int ary[3][5] = { 0, };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            ary[i][j] = j;
            printf("a[%d][%d] = %d ", i, j, ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}