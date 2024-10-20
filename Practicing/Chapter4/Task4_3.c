#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int room_width = 320;    // 거실의 가로 길이 (단위: cm)
    int room_height = 200;   // 거실의 세로 길이 (단위: cm)
    int tile_size = 30;      // 타일의 한 변의 길이 (단위: cm)

    int tiles_needed = (room_width / tile_size + (room_width % tile_size != 0)) * (room_height / tile_size + (room_height % tile_size != 0));

    printf("필요한 타일 개수: %d개\n", tiles_needed);

    return 0;
}