#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char c = 'A';
    
    printf("%c의 아스키 코드 = %d\n", c, c);
    printf("%c의 아스키 코드 = %d\n", c + 1, c + 1);
    printf("%c의 아스키 코드 = %d\n", c + 2, c + 2);

    return 0;
}