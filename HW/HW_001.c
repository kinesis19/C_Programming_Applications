#include <stdio.h>

// 배열을 오름차순으로 정렬하는 버블 정렬 함수
void sortBubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // 총 n-1번 반복 (배열 크기만큼 반복할 필요 없음)
        for (int j = 0; j < n - i - 1; j++) { // 이미 정렬된 마지막 i개의 요소를 제외한 나머지 비교
            if (arr[j] > arr[j + 1]) { // 현재 요소가 다음 요소보다 큰 경우
                // 두 값을 교환
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 배열의 모든 요소를 출력하는 함수
void printArray(int arr[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 배열의 각 요소를 순차적으로 출력
    }
    printf("}\n"); // 줄바꿈 추가
}

int main() {
    // 정렬할 배열 초기화
    int arr[] = {4, 9, 8, 7, 2}; // 초기 배열
    int n = sizeof(arr) / sizeof(arr[0]); // 배열 크기 계산

    printf("정렬 전 상태의 배열: ");
    printArray(arr, n);

    // 버블 정렬 수행
    sortBubble(arr, n);

    printf("버블 정렬 후 상태의 배열: ");
    printArray(arr, n);

    return 0; // 프로그램 종료
}
