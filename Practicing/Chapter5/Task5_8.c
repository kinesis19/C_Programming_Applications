#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int input, computerChoice;

    printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
    printf("하나를 선택하세요 (가위 -0, 바위 -1, 보 -2): ");
    scanf("%d", &input);

    srand(time(NULL));
    
    // 0, 1, 2 중 하나의 난수를 생성하여 컴퓨터의 선택으로 사용
    computerChoice = rand() % 3;

    printf("사용자 = %d\n", input);
    printf("컴퓨터 = %d\n", computerChoice);

    if(input == computerChoice) printf("비겼습니다.\n");
    else if((input == 0 && computerChoice == 2) || (input == 1 && computerChoice == 0) || (input == 2 && computerChoice == 1)) printf("사용자 승리\n");
    else printf("컴퓨터 승리\n");

    return 0;
}