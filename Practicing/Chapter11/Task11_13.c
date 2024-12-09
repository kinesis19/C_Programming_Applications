#include <stdio.h>
#include <string.h>

union student{
    int number;
    char name[10];
};

int main() {

    union student s;

    s.number = 24;
    printf("s.number = %d, s.name = %s\n\n", s.number, s.name);

    strcpy(s.name, "Park");
    printf("s.number = %d, s.name = %s\n\n", s.number, s.name);

    return 0;
}