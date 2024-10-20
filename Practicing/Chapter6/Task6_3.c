#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int i, j = 1;

    printf("출력하고 싶은 단: ");
    scanf("%d", &i);

    while(j <= 9){
        printf("%d * %d = %d\n", i, j, i * j);
        j++;
    }

    return 0;
}