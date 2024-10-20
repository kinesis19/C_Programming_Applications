#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n1, n2;

    printf("정수 2개: ");
    scanf("%d %d", &n1, &n2);

    printf("큰 수 = %d\n", (n1 > n2) ? n1 : n2);
    printf("작은 수 = %d\n", (n1 < n2) ? n1 : n2);

    return 0;
}