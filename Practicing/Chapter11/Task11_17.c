#include <stdio.h>

typedef struct point{
    int x;
    int y;
} POINT;

POINT translate(POINT x, POINT y);

int main() {

    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;

    result = translate(p, delta);
    printf("(%d + %d) + (%d + %d) -> (%d, %d)\n\n", p.x, delta.x, p.y, delta.y, result.x, result.y);

    return 0;
}

POINT translate(POINT x, POINT y) {

    POINT resultTranslate;
    resultTranslate.x = x.x + y.x;
    resultTranslate.y = x.y + y.y;

    return resultTranslate;
}