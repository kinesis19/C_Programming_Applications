#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};

struct student{
    int number;
    char name[10];
    double grade;
    struct date *dob;
};

int main() {

    struct date d = {9, 12, 2024};
    struct student s = {24, "Park", 4.5};

    s.dob = &d;

    printf("학번 = %d\n", s.number);
    printf("이름 = %s\n", s.name);
    printf("학점 = %.2lf\n", s.grade);

    printf("Exam Month: %d, Day: %d, Year: %d\n\n", s.dob->month, (*s.dob).day, s.dob->year);
    

    return 0;
}