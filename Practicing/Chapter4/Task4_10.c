#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int i;
    double f;

    f = 5 / 4;
    printf("(5 / 4) = %lf\n", f);

    f = (double)5 / 4;
    printf("(double)5 / 4 = %lf\n", f);

    i = 1.38 + 1.8;
    printf("1.3 +1.8 = %d\n", i);

    i = (int)1.38 + (int)1.8;
    printf("(int)1.38 + (int)1.8 = %d\n", i);

    return 0;
}