#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

struct QUESTION{
    char question[SIZE];
    char item1[SIZE];
    char item2[SIZE];
    char item3[SIZE];
    char item4[SIZE];

    int solution;
};

struct QUESTION bank[100] = {
    {"임베디드 어쩌구", "1.a", "2.b", "3.c", "4.d",3},
    {"가나다라 어쩌구", "1.a", "2.b", "3.c", "4.d",3},
};

int main() {

    int select;

    for (int i = 0; i < 2; i++) {
        printf("%s\n", bank[i].question);
        printf("%s\n", bank[i].item1);
        printf("%s\n", bank[i].item2);
        printf("%s\n", bank[i].item3);
        printf("%s\n", bank[i].item4);

        scanf("%d", &select);

        if (select == bank[i].solution) {
            printf("정답입니다.\n\n");
        } else {
            printf("오답입니다.\n\n");
        }
    }

    return 0;
}