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
	char* s1 = "3.12e4"; // 지수 표기법도 정상 작동한다.
	float num;

	num = atof(s1);

	printf("%f\n", num);
}

void string_float_multiple()
{
	char* s1 = "35.283672 3.e5 9.281772 7.e-5";

	float num1, num2, num3, num4;
	char* end; // 이전 수의 끝 부분을 저장하기 위한 포인터

	num1 = strtof(s1, &end); // 변환 후 끝부분을 end에 저장
	num2 = strtof(end, &end); // end에서 시작하고 변환 후 끝부분을 end에 저장
	num3 = strtof(end, &end);
	num4 = strtof(end, NULL); // NULL을 넣어도 되고 &end를 넣어도 됨

	printf("%f\n", num1);
	printf("%f\n", num2);
	printf("%f\n", num3);
	printf("%f\n", num4);
}

void string_long()
{
	char* s1 = "0xaf10";
	int num;

	num = strtol(s1, NULL, 16); // s1을 16진수로 변환

	printf("%x %d\n", num, num); // af10 44816
}

void string_long_multiple()
{
	char* s1 = "0xaf10 42 0x27c 9952";

	int num1, num2, num3, num4;
	char* end; // 이전 수의 끝 부분을 저장하기 위한 포인터

	num1 = strtol(s1, &end, 16); // 변환 후 끝부분을 end에 저장
	num2 = strtol(end, &end, 10); // end에서 시작하고 변환 후 끝부분을 end에 저장
	num3 = strtol(end, &end, 16);
	num4 = strtol(end, NULL, 10); // NULL을 넣어도 되고 &end를 넣어도 됨

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

	sprintf(s1, "0x%x", num); // %x로 지정하면 자동으로 16진수가 됨. %X로 지정하면 대문자.

	printf("%s", s1); // 0x11b
}