#include <stdio.h>
#define SIZE 5

void print_array(int a[], int size);
void modify_array(int a[], int size);

int main() {

    int list[SIZE] = {1, 2, 3, 4, 5};
    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);

    return 0;
}

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void modify_array(int a[], int size) {

    int i;

    for (i = 0; i < size; i++) {
        a[i] = a[i] + 1;
    }
}