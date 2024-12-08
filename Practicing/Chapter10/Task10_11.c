#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int lower_case_count = 0;
    int upper_case_count = 0;
    int digit_count = 0;
    char pass[100] = "";
    int len, i;

    printf("패스워드를 입력하시오: ");

    for (i = 0; i < 12; i++) {
        int ch = _getch();
        if (ch == '\r') {
            break;
        }
        pass[i] = ch;
        _putch('*');
    }

    len = strlen(pass);
    for (i = 0; i < len; i++) {
        if(islower(pass[i])) {
            lower_case_count++;
        }

        if(isupper(pass[i])) {
            upper_case_count++;
        }

        if(isdigit(pass[i])) {
            digit_count++;
        }
    }

    if((len >= 7 && lower_case_count > 0) && (upper_case_count > 0 && digit_count > 0)) {
        printf("유효한 암호입니다.\n");
    } else {
        printf("유효하지 않은 암호입니다.\n");
    }


    return 0;
}