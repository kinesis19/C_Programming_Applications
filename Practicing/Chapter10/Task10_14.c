#include <stdio.h>
#include <string.h>

int main() {

    char s[] = "Man is immortal, because he has a soul";
    char steps[] = " ,\t\n";
    char *token;

    // 첫 번째 토큰 가져오기
    token = strtok(s, steps); // 공백과 쉼표를 기준으로 분리

    // 모든 토큰 출력
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, steps); // 다음 토큰 가져오기
    }

    return 0;
}