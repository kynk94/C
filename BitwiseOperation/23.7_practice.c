// 다음 소스 코드를 완성하여 4가 출력되게 만드세요.
#include <stdio.h>

int main() {
	unsigned char num1 = 32; // 0010 0000

	num1 = num1 >> 4 << 1;

	printf("%u\n", num1); // 0000 0100

	return 0;
}