#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pi;
    double *pf;
    char *pc;

    pi = (int *)malloc(sizeof(int));
    pf = (double *)malloc(sizeof(double));
    pc = (char *)malloc(sizeof(char));

    if ((pi == NULL || pf == NULL) || pc == NULL) {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    *pi = 100;
    *pf = 3.14;
    *pc = 'a';

    printf("동적 메모리 정상 할당 완료\n");
    printf("%d, %.2lf, %c", *pi, *pf, *pc);

    free(pi);
    free(pf);
    free(pc);


    return 0;
}