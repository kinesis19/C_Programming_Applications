#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int roomWidth = 320, roomHeight = 200, tileSize = 30;

	int tilesNeed;
	tilesNeed = (roomWidth / tileSize + (roomWidth % tileSize != 0)) * (roomHeight / tileSize + (roomHeight % tileSize != 0));

	printf("필요한 타일의 개수 : %d개\n", tilesNeed);

	return 0;
}