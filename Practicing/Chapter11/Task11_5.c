#include <stdio.h>
#include <string.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    int number;
    char name[10];
    struct date deb;
    double grade;
};

int main() {

    struct student s;

    s.number = 24;
    strcpy(s.name, "Park");
    s.deb.year = 2024;
    s.deb.month = 12;
    s.deb.day = 9;

    printf("year = %d, month = %d, day = %d\n\n", s.deb.year, s.deb.month, s.deb.day);

    return 0;
}