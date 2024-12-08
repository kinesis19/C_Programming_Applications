#include <stdio.h>

int main() {

    char line1[100] = "##computer##";
    char line2[100] = "";

    int k = 0;
    for (int i = 0; line1[i] != '\0'; i++) {
        while(('A' <= line1[i] && line1[i] <= 'Z') && ('a' <= line1[i] && line1[i] <= 'z')) {
            line2[k++] = line1[i++];
        }
    }

    line2[k] = '\0';
    printf("입력된 문자열: %s\n", line1);
    printf("출력된 문자열: %s\n", line2);

    return 0;
}