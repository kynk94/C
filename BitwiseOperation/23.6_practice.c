// 다음 소스 코드를 완성하여 5, 4, 1, 250이 각 줄에 출력되게 만드세요.
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