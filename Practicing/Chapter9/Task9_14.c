#include <stdio.h>

int main () {

    int a[] = {10,  20, 30, 40, 50};
    int *p;

    p = a;

    printf("a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d, a[4] = %d\n\n", a[0], a[1], a[2], a[3], a[4]);
    printf("p[0] = %d, p[1] = %d, p[2] = %d, p[3] = %d, p[4] = %d\n\n", p[0], p[1], p[2], p[3], p[4]);

    return 0;
}