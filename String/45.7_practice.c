/*
표준 입력으로 길이 60 이하의 인터넷 도메인이 입력됩니다.
점을 기준으로 문자열을 분리하여 각 줄마다 출력하세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[61];
	scanf("%s", s1);

	char* ptr = strtok(s1, ".");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, ".");
	}

	return 0;
}