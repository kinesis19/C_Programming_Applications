#include <stdio.h>
#define SIZE 5

int main() {
    
    int i;
    int ary[SIZE] = {10, 20, 30, 40, 50};

    for (i = 0; i < SIZE; i++) {
        printf("s[%d] = %d\n", i, ary[i]);
    }

    return 0;
}