#include <stdio.h>

int main () {

    int a[] = {10, 20, 30, 40, 50};

    printf("배열의 이름 = %p\n", a);
    printf("첫 번째 원소 = %p\n", &a[0]);


    return 0;
}