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

	// |= ����ũ -> or ����, ��Ʈ On
	flag |= 1; // 1 = 0000 0001
	flag |= 2; // 2 = 0000 0010
	flag |= 4; // 4 = 0000 0100

	printf("%u\n", flag); // 7 = 0000 0111

	if (flag & 1) printf("8��° ��Ʈ�� On ����\n");
	else printf("8��° ��Ʈ�� Off ����\n");
}

void FlagOff() {
	unsigned char flag = 7; // 0000 0111

	// &= ~����ũ -> not, and ����, ��Ʈ Off
	flag &= ~2; // ~2 = 1111 1101

	printf("%u\n", flag); // 5 = 0000 0101

	if (flag & 2) printf("7��° ��Ʈ�� On ����\n");
	else printf("7��° ��Ʈ�� Off ����\n");
}

void FlagToggle() {
	unsigned char flag = 7; // 0000 0111

	// ^= ����ũ -> xor ����, ��Ʈ Toggle
	flag ^= 2; // 2 = 0000 0010
	flag ^= 8; // 8 = 0000 1000

	printf("%u\n", flag); // 13 = 0000 1101

	if (flag & 1) printf("8��° ��Ʈ�� On ����\n");
	else printf("8��° ��Ʈ�� Off ����\n");
	if (flag & 2) printf("7��° ��Ʈ�� On ����\n");
	else printf("7��° ��Ʈ�� Off ����\n");
	if (flag & 4) printf("6��° ��Ʈ�� On ����\n");
	else printf("6��° ��Ʈ�� Off ����\n");
	if (flag & 8) printf("5��° ��Ʈ�� On ����\n");
	else printf("5��° ��Ʈ�� Off ����\n");
}