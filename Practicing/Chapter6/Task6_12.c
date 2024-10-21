#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

    srand(time(NULL));
    // niter: 반복 횟수, inside_dots: 원 안에 떨어진 점의 개수
    int niter, inside_dots = 0, i;
    // x, y: 난수 좌표, z: 점의 거리 제곱값, pi: 파이 근사값
    double x, y, z, pi;

    printf("반복 횟수: ");
    scanf("%d", &niter);

    // 원 안에 포함된 점의 개수 초기화
    inside_dots = 0;
    
    for(i = 0; i < niter; i++){
        // x 좌표: 0과 1 사이의 난수 생성
        x = (double)rand() / RAND_MAX;
        // y 좌표: 0과 1 사이의 난수 생성
        y = (double)rand() / RAND_MAX;
        // 원점(0,0)에서 해당 점까지의 거리의 제곱
        z = x * x + y * y;
        // 거리가 1 이하이면 원 안에 있는 점으로 간주
        if(z <= 1) inside_dots++;
    }

    // π 근사값 계산 (원 안에 있는 점 비율 * 4)
    pi = (double)inside_dots / niter * 4;
    printf("파이 = %lf\n\n", pi);


    return 0;
}