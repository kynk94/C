// 다음 소스 코드를 완성하여 "Alice's", "Adventures", "in", "Wonderland"가 각 줄마다 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40] = "Alice's Adventures in Wonderland";

	char* tok = strtok(s1, " ");

	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, " ");
	}

	return 0;
}