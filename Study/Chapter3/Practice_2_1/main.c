#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n1, n2;

	printf("������ int�� ũ��� %d�Դϴ�.\n", sizeof(int));
	printf("������ long�� ũ��� %d�Դϴ�.\n", sizeof(long));
	printf("������ longlong�� ũ��� %d�Դϴ�.\n\n", sizeof(long long));


	printf("������ �Է��ϼ��� (10����) : ");
	scanf("%d", &n1);
	printf("%d�� 10������ %d, 8������ 0%o, 16������ 0x%x�Դϴ�.\n\n", n1, n1, n1, n1);


	printf("������ �Է��ϼ��� (16����) : ");
	scanf("%x", &n1);
	printf("%x�� 10������ %d, 8������ 0%o, 16������ 0x%x�Դϴ�.", n1, n1, n1, n1);

	return 0;
}