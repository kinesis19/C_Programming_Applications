#include <stdio.h>

int main() {

    char str1[7] = "A bird";
    char str2[3] = {'i', 'n', '\0'};
    char str3[] = "hand is worth two in the bush.";

    printf("%s %s %s\n", str1, str2, str3);

    return 0;
}