#include <stdio.h>

int main () {

    int number = 10;
    int *p;

    p = &number;

    printf("변수 number의 주소 = %p\n", &number);
    printf("포인터 p의 주소 = %p\n", p);

    printf("변수 number의 값 = %d\n", number);
    printf("포인터 p의 값 = %d\n", *p);

    return 0;
}