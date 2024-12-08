#include <stdio.h>

struct points {
    int x;
    int y;
};

int main() {

    struct points p = {1, 2};
    struct points q = {.y = 2, .x = 1};

    struct points r = p;
    r = (struct points) {1, 2};

    printf("p = (%d, %d)\n", p.x, p.y);
    printf("q = (%d, %d)\n", q.x, q.y);
    printf("r = (%d, %d)\n", r.x, r.y);

    return 0;
}