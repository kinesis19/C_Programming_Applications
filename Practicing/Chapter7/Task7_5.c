#include <stdio.h>
#define SIZE 10
int main() {

    int i, j;
    int list[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int input;
    printf("원하는 값 입력: ");
    scanf("%d", &input);

    for (i = 0; i < SIZE; i++) {
        if (list[i] == input) {
            printf("탐색 성공 인덱스: %d\n", i);
        }
    }

    return 0;
}