#include <stdio.h>

enum season{
    SPRING,
    SUMMER,
    FALL,
    WINTER
};

int main() {

    enum season s = FALL;

    switch (s) {
        
        case SPRING:
            printf("봄입니다.\n");
            break;
        case SUMMER:
            printf("여름입니다.\n");
            break;
        case FALL:
            printf("가을입니다.\n");
            break;
        case WINTER:
            printf("겨울입니다.\n");
            break;
        default:
            printf("잘못된 값입니다.\n");
            break;
    }

    return 0;
}