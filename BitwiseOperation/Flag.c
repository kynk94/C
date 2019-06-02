#include<stdio.h>

void FlagOn();
void FlagOff();
void FlagToggle();

int main() {
	//FlagOn();
	//FlagOff();
	FlagToggle();

	return 0;
}

void FlagOn() {
	unsigned char flag = 0; // 0000 0000

	// |= 마스크 -> or 연산, 비트 On
	flag |= 1; // 1 = 0000 0001
	flag |= 2; // 2 = 0000 0010
	flag |= 4; // 4 = 0000 0100

	printf("%u\n", flag); // 7 = 0000 0111

	if (flag & 1) printf("8번째 비트가 On 상태\n");
	else printf("8번째 비트가 Off 상태\n");
}

void FlagOff() {
	unsigned char flag = 7; // 0000 0111

	// &= ~마스크 -> not, and 연산, 비트 Off
	flag &= ~2; // ~2 = 1111 1101

	printf("%u\n", flag); // 5 = 0000 0101

	if (flag & 2) printf("7번째 비트가 On 상태\n");
	else printf("7번째 비트가 Off 상태\n");
}

void FlagToggle() {
	unsigned char flag = 7; // 0000 0111

	// ^= 마스크 -> xor 연산, 비트 Toggle
	flag ^= 2; // 2 = 0000 0010
	flag ^= 8; // 8 = 0000 1000

	printf("%u\n", flag); // 13 = 0000 1101

	if (flag & 1) printf("8번째 비트가 On 상태\n");
	else printf("8번째 비트가 Off 상태\n");
	if (flag & 2) printf("7번째 비트가 On 상태\n");
	else printf("7번째 비트가 Off 상태\n");
	if (flag & 4) printf("6번째 비트가 On 상태\n");
	else printf("6번째 비트가 Off 상태\n");
	if (flag & 8) printf("5번째 비트가 On 상태\n");
	else printf("5번째 비트가 Off 상태\n");
}