#include <stdio.h>

// 배열을 오름차순으로 정렬하는 선택 정렬 함수
void selectionSort(int array[], int size) {
    for (int current = 0; current < size - 1; current++) {
        int smallestIndex = current; // 현재 위치를 최소값 인덱스로 초기화

        for (int next = current + 1; next < size; next++) { // 현재 위치 이후의 요소에서 최소값을 찾음
            if (array[next] < array[smallestIndex]) {
                smallestIndex = next; // 최소값의 인덱스를 업데이트
            }
        }

        // 최소값을 현재 위치로 교환
        if (smallestIndex != current) { // 최소값이 현재 위치와 다를 경우에만 교환
            int swapTemp = array[smallestIndex]; // 임시 변수에 최소값 저장
            array[smallestIndex] = array[current]; // 최소값 위치에 현재 값 저장
            array[current] = swapTemp; // 현재 위치에 최소값 저장
        }
    }
}

// 배열의 모든 요소를 출력하는 함수
void displayArray(int array[], int size) {
    printf("{ "); // 출력 시작
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // 배열 요소를 순차적으로 출력
    }
    printf("}\n"); // 출력 종료
}

int main() {
    // 초기 배열 정의
    int numbers[] = {50, 20, 80, 90, 10}; // 정렬할 배열
    int length = sizeof(numbers) / sizeof(numbers[0]); // 배열의 크기 계산

    printf("초기 배열 상태: ");
    displayArray(numbers, length);

    // 선택 정렬 수행
    selectionSort(numbers, length);

    printf("선택 정렬 후 배열 상태: ");
    displayArray(numbers, length);

    return 0; // 프로그램 종료
}
