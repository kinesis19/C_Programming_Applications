#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main() {

    struct student s;

    s.number = 24;
    strcpy(s.name, "Kim");
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2lf\n", s.grade);


    return 0;
}