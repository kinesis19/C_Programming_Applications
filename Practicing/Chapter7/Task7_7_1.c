#include <stdio.h>

int main() {

    int i, j, k, x, y;
    int area = 0;
    int wall[10][10] = { 0, };

    for (i = 0; i < 2; i++) {
        printf("%d번째 사각형: ", i);
        scanf("%d %d", &x, &y);

        for (j = x; j < x + 3; j++) {
            for (k = y; k < y + 3; k++) {
                wall[j][k] = 1;
            }
        }
    }

    for (i = 0; i <= 10; i++) {
        for(j = 0; j <= 10; j++) {
            if (wall[i][j] == 1){
                area++;
            }
        }
    }

    printf("수리해야 하는 타일의 개수: %d\n", area);

    return 0;
}