#include <stdio.h>
#define SIZE 26

int main() {
    int i;
    int ary[SIZE] = { 0, };

    for (i = 0; i < SIZE; i++) {
        ary[i] = 'a' + i;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%c", ary[i]);
    }

    printf("\n");

    return 0;
}