// 다음 소스 코드를 완성하여 "Beethoven 9th Symphony"가 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = " 9th Symphony";
	char s2[40] = "Beethoven";

	strcat(s2, s1);

	printf("%s\n", s2);

	return 0;
}