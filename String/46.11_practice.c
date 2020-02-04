// 다음 소스 코드를 완성하여 문자열 "98.415237 0x3fce1920"이 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[30];
	float num1 = 98.415237f;
	int num2 = 0x3fce1920;

	sprintf(s1, "%f 0x%x", num1, num2);

	printf("%s\n", s1);

	return 0;
}