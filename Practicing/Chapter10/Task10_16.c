#include <stdio.h>
#include <stdlib.h>

int main() {

    char s1[] = "100";
    char s2[] = "12.93";

    int i;
    double d, result;

    i = atoi(s1);
    d = atof(s2);
    result = i + d;
    printf("연산 결과는 %.2lf입니다.\n", result);

    return 0;
}