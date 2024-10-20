#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n1 = 15, n2 = 5;

    printf("%08X & %08X = %08X\n", n1, n2, n1 & n2);
    printf("%08X | %08X = %08X\n", n1, n2, n1 | n2);
    printf("%08X ^ %08X = %08X\n", n1, n2, n1 ^ n2);
    printf("~%08X = %08X\n", n1, ~n1);

    return 0;
}