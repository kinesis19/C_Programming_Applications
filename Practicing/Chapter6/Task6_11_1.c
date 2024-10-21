#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num, i, j, prime = 0;
    
    printf("어디까지 찾을까요? ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++){
        prime = 1;

        for(j = 2; j < i; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%d ", i);
        }
    }

    return 0;
}