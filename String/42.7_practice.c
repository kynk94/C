// 다음 소스 코드를 완성하여 "The Little Prince"가 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* s1 = "The Little Prince";
	char* s2 = malloc(sizeof(char) * (strlen(s1) + 1));

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}