#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, tempNum, sumNum = 0, numFirst, numSecond, numThird;
	printf("3자리 숫자를 입력하세요 : ");
	scanf("%d", &num);

	tempNum = num;

	numFirst = tempNum / 100;
	tempNum = tempNum - (numFirst * 100);

	numSecond = tempNum / 10;
	tempNum = tempNum - (numSecond * 10);

	numThird = tempNum / 1;
	tempNum = tempNum - (numThird * 1);

	sumNum = numFirst + numSecond + numThird;

	printf("%d의 자릿수 합은 %d입니다.", num, sumNum);

	return 0;
}