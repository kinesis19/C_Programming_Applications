#include <stdio.h>
#define SIZE 5

int get_average(int scores[], int size);

int main() {
    
    int list[SIZE] = {1, 2, 3, 4, 5};
    int avg;
    avg = get_average(list, SIZE);

    printf("평균은 %d입니다.\n", avg);
    printf("MAIN, 함수 호출 실행 후, scores[2]의 값은 %d입니다.\n", list[2]);

    return 0;
}

int get_average(int scores[], int size) {

    int sum = 0;

    printf("함수, After pass 후 함수에서 10 증가 전 scores[2]의 값은 %d입니다.\n", scores[2]);

    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    scores[2] += 10;

    printf("함수, After pass 후 함수에서 10 증가 후 scores[2]의 값은 %d입니다.\n", scores[2]);

    return sum / size;
}