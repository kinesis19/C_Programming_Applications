#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define KMH_TO_MS (1000/3600.0)

int main() {

    double dist = 18.4; // 단위: m
    double speed = 160 * KMH_TO_MS; // km/h를 m/s로 변환
    double time = dist/speed; // 시간 계산

    printf("강속구가 홈플레이트에 도달하는 데 걸리는 시간: %f초\n", time);

	return 0;
}