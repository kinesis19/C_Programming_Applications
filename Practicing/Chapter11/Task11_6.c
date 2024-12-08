#include <stdio.h>

struct studnet {
    int number;
    char name[10];
    double grade;
};

int main() {

    struct studnet list[100];

    list[2].number = 24;
    printf("%d\n", list[2].number);

    return 0;
}