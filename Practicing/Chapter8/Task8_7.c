#include <stdio.h>

int global_variable = 0;

void increment(void) {
    global_variable++;
}

void print_global_variable(void) {
    printf("global_variable = %d\n", global_variable);
}

int main () {

    increment();

    print_global_variable();

    return 0;
}