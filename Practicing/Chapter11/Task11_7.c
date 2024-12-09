#include <stdio.h>
#define SIZE 3

struct student{
    int number;
    char name[20];
    double grade;
};

int main() {

    struct student list[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("학번 입력: ");
        scanf("%d", &list[i].number);

        printf("이름 입력: ");
        scanf("%s", list[i].name);

        printf("학점 입력: ");
        scanf("%lf", &list[i].grade);
    }


    for (int i = 0; i < SIZE; i++) {
        printf("학번: %d ", list[i].number);

        printf("이름: %s", list[i].name);

        printf("학점: %.2lf\n\n", list[i].grade);
    }

    return 0;
}