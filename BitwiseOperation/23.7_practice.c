// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 4�� ��µǰ� ���弼��.
#include <stdio.h>

int main() {
	unsigned char num1 = 32; // 0010 0000

	num1 = num1 >> 4 << 1;

	printf("%u\n", num1); // 0000 0100

	return 0;
}