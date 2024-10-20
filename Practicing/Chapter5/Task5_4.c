#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char input;
    printf("문자를 입력하시오: ");
    input = getchar();

    if('A' <= input && input <= 'Z'){
        printf("%c는 대문자입니다.\n", input);
    }else if('a' <= input && input <= 'z'){
        printf("%c는 소문자입니다.\n", input);
    }else if('0' <= input && input <= '9'){
        printf("%c는 숫자입니다.\n", input);
    }else{
        printf("%c는 기타 문자입니다.n", input);
    }

    return 0;
}