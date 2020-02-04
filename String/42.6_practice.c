// 다음 소스 코드를 완성하여 "C Language"가 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "C Language";
	char s2[20];

	strcpy(s2, s1);

	printf("%s\n", s2);

	return 0;
}