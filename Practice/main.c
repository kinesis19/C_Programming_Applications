#include <stdio.h>

int main(){
    int answer;
    int num1, num2, result;
    
    while(1){ // Infinite loop to keep asking
        printf("Hello (1 for Yes, 0 for No): ");
        scanf("%d", &answer);
        
        if(answer == 1){
            printf("Hello, how are you...\n");
            
            printf("Let's do some math. Enter two numbers:\n");
            printf("Number 1: ");
            scanf("%d", &num1);
            printf("Number 2: ");
            scanf("%d", &num2);

            result = num1 + num2;
            printf("The sum of %d and %d is %d. \n", num1, num2, result);

            break;

        } else if (answer == 0){
            printf("Operation terminated. Exiting...\n");
            break;// Exit the loop and program
        } else {
            printf("Invalid input. Try again.\n");
            break;
        }
    }

    return 0;
}
