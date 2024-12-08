#include <stdio.h>

#define ROWS 3
#define COLS 3

double get_total_avg(int m[][COLS]) {

    int *p, *endp;
    double sum = 0.0;

    p = &m[0][0];
    endp = &m[ROWS - 1][COLS - 1];

    while(p <= endp) {
        sum += *p++;
    }
    
    sum /= ROWS * COLS;

    return sum;

}

int main() {

    int scores[ROWS][COLS] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    double avg = get_total_avg(scores);

    printf("형균 성적 = %.2f\n", avg);


    return 0;
}