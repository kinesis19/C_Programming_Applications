#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    char name;
    int schoolId, sub1, sub2, sub3, sub4;
    double avg = 0;

    printf("이름: ");
    // scanf("%c", &name);
    name = getchar();

    printf("학번: ");
    scanf("%d", &schoolId);

    printf("성적: ");
    scanf("%d %d %d %d", &sub1, &sub2, &sub3, &sub4);

    avg = (sub1 + sub2 + sub3 + sub4) / 4.0;
    
    printf("학생 %c(학번: %d)의 평균 성적은 %.2lf입니다.", name, schoolId, avg);

    return 0;
}