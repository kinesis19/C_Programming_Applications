#include <stdio.h>

struct studnet{
    int number;
    char name[10];
    double grade;
};

int main() {

    struct studnet s;
    
    printf("학번을 입력하시오: ");
    scanf("%d", &s.number);

    printf("이름을 입력하시오: ");
    scanf("%s", s.name);

    printf("학점을 입력하시오: ");
    scanf("%lf", &s.grade);

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2lf\n", s.grade);

    return 0;
}