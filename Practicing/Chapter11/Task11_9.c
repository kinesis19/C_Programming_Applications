#include <stdio.h>

struct vector{
    double x;
    double y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main() {

    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;

    sum = get_vector_sum(a, b);

    printf("합 = %.2lf, %.2lf\n\n", sum.x, sum.y);

    return 0;
}



struct vector get_vector_sum(struct vector a, struct vector b) {

    struct vector result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}