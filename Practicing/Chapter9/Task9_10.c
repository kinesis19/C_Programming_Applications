#include <stdio.h>

int a(int ii, int *jj, int *kk);

int main () {

    int i = 77, j = 88, kkk = 0;

    printf("함수 호출전 main i = %d, j = %d\n\n", i, j);

    a(i, &j, &kkk);

    printf("함수 호출후 main i = %d, j = %d, kkk = %d\n\n", i, j, kkk);

    return 0;
}

int a(int ii, int *jj, int *kk) {

    printf("함수 호출 때 함수에서 전달 받은 값 ii = %d, &jj주소값 = %p\n\n", ii, jj);

    ii += 1;
    *jj += 1;
    *kk = ii + *jj;

    printf("함수 호출 때 함수에서 전달 받은 값 ii = %d, jj = %d, &ij 주소값 = %p kkk = %d\n\n", ii, *jj, &jj, *kk);

}