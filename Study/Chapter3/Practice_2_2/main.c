#define _CRT_SECURE_NO_WARNINGS
#define KMH_TO_MS (1000/3600.0);
#include <stdio.h>

int main() {

	double distance, speed, time;

	// 시간 = 거리 / 속력
	distance = 18.4;
	speed = 160 * KMH_TO_MS;
	time = distance / speed;

	printf("강속구가 홈플레이트에 도달하는 데 걸리는 시간 : %lf초", time);


	return 0;
}