#include <stdio.h>

int compute_sum(int n);

int main() {    
    int sum;
    sum = compute_sum(100);
    printf("1부터 100까지의 합 = %d\n", sum);
    return 0;
}

int compute_sum(int n) {

    int result = 0;

    for (int i = 1; i <= n; i++) {
        result = result + i;
    }

    return result;
}