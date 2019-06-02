#include<stdio.h>
void UseOperator();
void UseOperAdvanced();

int main() {
	UseOperator();
	UseOperAdvanced();
	return 0;
}

void UseOperator() {
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 3; // 0000 0011

	printf("%u\n", num1 & num2); // 0000 0001 = 1, and ������
	printf("%u\n", num1 | num2); // 0000 0011 = 3, or ������
	printf("%u\n\n", num1 ^ num2); // 0000 0010 = 2, xor ������

	unsigned char num3 = 162; // 1010 0010
	unsigned char num4;

	num4 = ~num3;

	printf("%u\n", num4); // 0101 1101 = 93, not ������
	printf("%u\n\n", ~num3); // 4294967133 = 4294967295-162, 4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111 
	// -> char�� ��������� 8��Ʈ�� �ν��ؼ� 8��Ʈ�� �ؼ��ϴµ� ������ ���� �ʾƼ� 32��Ʈ uint�� �ؼ��� ������ ���δ�.

	unsigned char num5 = 3; // 0000 0011
	unsigned char num6 = 24; // 0001 1000

	printf("%u\n", num5 << 3); // 0001 1000 = 24, �������� 3��Ʈ �̵�
	printf("%u\n\n", num6 >> 2); // 0000 0110 = 6, ���������� 2��Ʈ �̵�

	num1 = 4; // 0000 0100
	num2 = 4; // 0000 0100
	num3 = 4; // 0000 0100
	num4 = 4; // 0000 0100
	num5 = 4; // 0000 0100

	num1 &= 5; // 5 = 0000 0101, and ���� �� �Ҵ�
	num2 |= 2; // 2 = 0000 0010, or ���� �� �Ҵ�
	num3 ^= 3; // 3 = 0000 0011, xor ���� �� �Ҵ�
	num4 <<= 2; // �������� 2��Ʈ �̵� �� �Ҵ�
	num5 >>= 2; // ���������� 2��Ʈ �̵� �� �Ҵ�

	printf("%u\n", num1); // 0000 0100 = 4
	printf("%u\n", num2); // 0000 0110 = 6
	printf("%u\n", num3); // 0000 0111 = 7
	printf("%u\n", num4); // 0001 0000 = 16
	printf("%u\n\n", num5); // 0000 0001 = 1
}

void UseOperAdvanced() {
	unsigned char num1 = 1; // 0000 0001

	printf("%u\n", num1 << 1); // 0000 0010
	printf("%u\n", num1 << 2); // 0000 0100
	printf("%u\n", num1 << 3); // 0000 1000
	printf("%u\n", num1 << 4); // 0001 0000
	printf("%u\n", num1 << 5); // 0010 0000
	printf("%u\n", num1 << 6); // 0100 0000
	printf("%u\n\n", num1 << 7); // 1000 0000

	unsigned char num2 = 240; // 1111 0000
	unsigned char num3 = 15; // 0000 1111
	unsigned char num4, num5;

	num4 = num2 << 2;
	num5 = num3 >> 2;

	printf("%u\n", num4); // 192 = 1100 0000
	printf("%u\n\n", num5); // 3 = 0000 0011
	// �ڸ����� �ʰ��ϴ� ��� ��Ʈ�� �״�� �������.

	unsigned char num6 = 131; // 1000 0011
	char num7 = -125; // 1000 0011, �� �� ��Ʈ�� ��ȣ��Ʈ
	// (unsigned char) 125 = 0111 1101
	unsigned char num8;
	char num9, num10, num11;

	num8 = num6 >> 5;
	num9 = num7 >> 5;
	num10 = num7 << 1;
	num11 = num7 << 6 >> 6;
	printf("%u\n", num8); // 4 = 0000 0100
	printf("%d\n", num9); // -4 = 1111 1100, ������ �̵��� ���ڶ�� ��Ʈ�� ��ȣ��Ʈ�� ä����
	printf("%d\n", num10); // 6 = 0000 0110, ���� �̵��� ���ڶ�� ��Ʈ�� 0���� ä����
	printf("%d\n", num11); // -125, ó���� �״�� ����, ����Ʈ ������ �������� �̷����ٴ� ���� �� �� ����
}