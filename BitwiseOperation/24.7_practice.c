/*ǥ�� �Է����� �� ������ �Էµ˴ϴ�(�Է� ���� ������ 0~255).
�÷��׿� ������ ���� ������ �Ͽ� ����� ��µǰ� ���弼��.
���信�� ���� ģ �κп� �� �ڵ常 �ۼ��ؾ� �մϴ�.

num1�� ��Ʈ�� �������� 3�� �̵��� ������ flag�� ��Ʈ �ѱ�
num2�� ��Ʈ�� ���������� 2�� �̵��� ������ flag�� ��Ʈ ����
flag�� ù ��° ��Ʈ ����ϱ�*/
#define __USE_MINGW_ANSI_STDIO 1 // Dev-C++(MinGW)���� %hhu�� ����ϱ� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char flag = 16; // 0001 0000
	unsigned char num1, num2;

	scanf("%hhu %hhu", &num1, &num2);

	flag |= num1 << 3;
	flag &= ~num2 >> 2;
	flag ^= 128;
		
	printf("%u\n", flag);

	return 0;
}