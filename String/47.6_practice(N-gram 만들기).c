/*
표준 입력으로 정수와 길이 10 이하의 문자열이 입력됩니다.
입력된 문자열을 정수만큼 문자 단위로 N-gram을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
만약 입력된 문자열의 길이가 입력된 정수 미만이라면 wrong을 출력하세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int num, length;
	char text[11];

	scanf("%d %s", &num, text);
	length = strlen(text);

	if (length < num)
		printf("wrong\n");
	else
	{
		for (int i = 0; i < length - num + 1; i++)
		{
			for (int j = 0; j < num; j++)
				printf("%c", text[i + j]);
			printf("\n");
		}
	}

	return 0;
}
