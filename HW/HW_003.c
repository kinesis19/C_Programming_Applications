#include <stdio.h>

int main() {
    char str[100]; // 최대 99글자까지 입력 가능
    int count[256] = {0}; // 각 문자의 빈도를 저장하는 배열 (ASCII 기준)
    int digitCount = 0;    // 숫자의 개수를 저장
    int specialCount = 0;  // 특수 문자의 개수를 저장

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    // 문자열의 각 문자의 빈도를 계산 및 숫자/특수 문자 판별
    for (int i = 0; str[i] != '\0'; i++) { // 문자열의 끝이 NULL('\0')이전까지 순차적으로 반복
        count[(int)str[i]]++; // 현재 문자를 ASCII 값으로 변환하여 해당 index에 빈도를 증가

        // 숫자 확인
        if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        } else if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) { // 특수 문자 확인
            specialCount++;
        }
    }

    // 반복된 문자와 중복 횟수 출력
    printf("반복되어 나오는 문자와 중복 횟수:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] > 1) {
            printf("%c: %d회\n", str[i], count[(int)str[i]]);
            count[(int)str[i]] = 0; // 이미 출력한 문자는 다시 출력하지 않음
        }
    }

    // 숫자와 특수 문자의 개수 출력(반복된 숫자와 특수 문자가 아닌, 입력 받은 문자에 대한 숫자와 특수 문자의 개수 출력)
    printf("숫자의 개수: %d\n", digitCount);
    printf("특수 문자의 개수: %d\n", specialCount);

    return 0;
}
