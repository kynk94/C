// ���� �ҽ� �ڵ带 �ϼ��Ͽ� 5, 4, 1, 250�� �� �ٿ� ��µǰ� ���弼��.
#include <stdio.h>

int main() {
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 5; // 0000 0101

	printf("%u\n", num1 | num2); // 0000 0101
	printf("%u\n", num1 ^ num2); // 0000 0100
	printf("%u\n", num1 & num2); // 0000 0001

	num1 = ~num2;
	printf("%u\n", num1); // 1111 1010

	return 0;
}