#include <stdio.h>

int main() {

    int i, j;
    int aryA[3][3] = { 2, 3, 0, 8, 9, 1, 7, 0, 5};
    int aryB[3][3] = { 1, 0, 0, 1, 0, 0, 1, 0, 0};
    int aryS[3][3] = { 0, };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            aryS[i][j] = aryA[i][j] + aryB[i][j];
            printf("%d ", aryS[i][j]);
        }
        printf("\n");
    }


    return 0;
}