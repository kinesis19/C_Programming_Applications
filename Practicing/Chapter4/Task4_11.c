#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int dist_home_to_company = 60;
    int dist_earth_to_moon = 383000;
    int dist_go_to_company_and_back = dist_home_to_company * 2; // 출퇴근 거리
    int days = 1; // 출근일 수

    days = ((double)dist_earth_to_moon / dist_go_to_company_and_back + 0.5);

    int years = days / 365;
    int months = (days % 365) / 30;
    int remaining_days = (days % 365) % 30;

    printf("%d년 %d월 %d일 후 출퇴근 거리가 달까지의 거리가 됩니다.\n", years, months, remaining_days);

    return 0;
}