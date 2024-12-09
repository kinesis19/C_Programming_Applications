#include <stdio.h>

struct student{
    int number;
    char name[10];
    double grade;
};

int main() {

    struct student s = {1, "Park", 4.5};
    struct student *p;

    p = &s;

    printf("s의 학번 = %d, 이름 = %s, 학점 = %.2lf\n", s.number, s.name, s.grade);
    printf("p의 학번 = %d, 이름 = %s, 학점 = %.2lf\n", (*p).number, (*p).name, (*p).grade);
    printf("p의 학번 = %d, 이름 = %s, 학점 = %.2lf\n", p->number, p->name, p->grade);

    return 0;
}