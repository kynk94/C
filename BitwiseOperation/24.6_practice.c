// 다음 소스 코드를 완성하여 4 0이 출력되게 만드세요.
#include <stdio.h>

int main() {
	unsigned char flag1 = 1 << 7; // 1000 0000
	unsigned char flag2 = 1 << 3; // 0000 1000

	flag1 |= 1 << 2; // 1000 0100
	//flag1 &= 1 << 2;
	flag1 &= ~(1 << 7); // 0000 0100
	flag2 ^= 1 << 3;

	printf("%u %u\n", flag1, flag2);

	return 0;
}