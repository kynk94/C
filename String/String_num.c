#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi, strtol

void string_int();
void string_float();
void string_float_multiple();
void string_long();
void string_long_multiple();
void int_string();
void int_hex_string();

int main()
{
	//string_int();
	//string_float();
	//string_float_multiple();
	//string_long();
	//string_long_multiple();
	//int_string();
	int_hex_string();

	return 0;
}

void string_int()
{
	char* s1 = "283";
	int num;

	num = atoi(s1);

	printf("%d\n", num);
}

void string_float()
{
	//char* s1 = "35.283672";
	char* s1 = "3.12e4"; // ���� ǥ����� ���� �۵��Ѵ�.
	float num;

	num = atof(s1);

	printf("%f\n", num);
}

void string_float_multiple()
{
	char* s1 = "35.283672 3.e5 9.281772 7.e-5";

	float num1, num2, num3, num4;
	char* end; // ���� ���� �� �κ��� �����ϱ� ���� ������

	num1 = strtof(s1, &end); // ��ȯ �� ���κ��� end�� ����
	num2 = strtof(end, &end); // end���� �����ϰ� ��ȯ �� ���κ��� end�� ����
	num3 = strtof(end, &end);
	num4 = strtof(end, NULL); // NULL�� �־ �ǰ� &end�� �־ ��

	printf("%f\n", num1);
	printf("%f\n", num2);
	printf("%f\n", num3);
	printf("%f\n", num4);
}

void string_long()
{
	char* s1 = "0xaf10";
	int num;

	num = strtol(s1, NULL, 16); // s1�� 16������ ��ȯ

	printf("%x %d\n", num, num); // af10 44816
}

void string_long_multiple()
{
	char* s1 = "0xaf10 42 0x27c 9952";

	int num1, num2, num3, num4;
	char* end; // ���� ���� �� �κ��� �����ϱ� ���� ������

	num1 = strtol(s1, &end, 16); // ��ȯ �� ���κ��� end�� ����
	num2 = strtol(end, &end, 10); // end���� �����ϰ� ��ȯ �� ���κ��� end�� ����
	num3 = strtol(end, &end, 16);
	num4 = strtol(end, NULL, 10); // NULL�� �־ �ǰ� &end�� �־ ��

	printf("%x\n", num1);
	printf("%d\n", num2);
	printf("%x\n", num3);
	printf("%d\n", num4);
}

void int_string()
{
	char s1[10];
	int num = 283;

	sprintf(s1, "%d", num);

	printf("%s", s1);
}

void int_hex_string()
{
	char s1[10];
	int num = 283;

	sprintf(s1, "0x%x", num); // %x�� �����ϸ� �ڵ����� 16������ ��. %X�� �����ϸ� �빮��.

	printf("%s", s1); // 0x11b
}