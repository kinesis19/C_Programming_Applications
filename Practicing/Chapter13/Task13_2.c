#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("정수 2개를 저장할 공간 할당\n");

    int *list = (int *)malloc(sizeof(int) * 2);
    int i;
    int *list_new;

    if (list == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    list[0] = 10;
    list[1] = 20;

    printf("정수 3개를 저장할 공간으로 확장\n");
    list_new = (int *)realloc(list, 3 * sizeof(int));

    if (list_new == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    list_new[2] = 30;

    for (i = 0; i < 3; i++) {
        printf("%d ", list_new[i]);
    }
    printf("\n");

    return 0;
}