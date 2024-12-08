#include <stdio.h>

int main() {

    char name[100];
    char address[100];

    printf("이름을 입력하시오: ");
    gets_s(name, sizeof(name));


    printf("주소를 입력하시오: ");
    gets_s(address, sizeof(address));

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);

    return 0;
}