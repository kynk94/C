/*
표준 입력으로 길이 30 이하의 어떤 문자열이 입력됩니다.
입력된 문자열의 길이를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31];

	scanf("%s", s1);

	printf("%zd\n", strlen(s1));

	return 0;
}