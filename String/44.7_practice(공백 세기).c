/*
표준 입력으로 길이 1,000 이하의 문자열이 입력됩니다.
입력된 문자열에서 공백의 개수를 출력하는 프로그램을 만드세요
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

scanf에서 공백을 포함한 문자열을 입력받으려면 서식 지정자로 "%[^\n]s"를 사용하면 됩니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1001];
	int count = 0;

	scanf("%[^\n]s", s1);

	char* ptr = strchr(s1, ' ');

	while (ptr != NULL)
	{
		count++;
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d", count);

	return 0;
}