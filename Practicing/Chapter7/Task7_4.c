#include <stdio.h>
#define SIZE 5

int main() {

    int i, j;
    int list[SIZE] = {16, 7, 9, 1, 3};

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}