#include <stdio.h>

int main() {

    char s[] = "Barking dogs seldom bite.";
    char t[] = "A bad workman blames his tools";

    const char *p = s;
    char * const q = s;

    p = t;

    q[3] = 'a';

    printf("%s\n%s\n", p, q);

    return 0;
}