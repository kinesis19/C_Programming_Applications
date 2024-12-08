#include <stdio.h>

int fact(int n);

int main () {

    int result = fact(5);
    printf("5!은 %d입니다.\n", result);

    return 0;
}

int fact(int n) {

    printf("fact(%d)\n", n);

    if (n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}