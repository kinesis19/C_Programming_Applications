#include <stdio.h>

int main () {

    int data = 0x0A0B0C0D;
    char *pc;
    
    // 리틀 엔디언 방식 사용(가장 낮은 바이트부터 저장 -> 0D, 0C, 0B, 0A 순으로 저장)
    pc = (char *)&data;

    for (int i = 0; i < 4; i++) {
        printf("*(pc + %d) = %02X\n", i, *(pc + i));
    }
    return 0;
}