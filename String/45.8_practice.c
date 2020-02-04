/*
표준 입력으로 길이 1,000 이하의 문자열이 입력됩니다.
입력된 문자열에서 "the"의 개수를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
단, 모든 문자가 소문자인 "the"만 찾으면 되며 "them", "there", "their" 등은 포함하지 않아야 합니다.

scanf에서 공백을 포함한 문자열을 입력받으려면 서식 지정자로 "%[^\n]s"를 사용하면 됩니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1001];
	scanf("%[^\n]s", s1);

	char* ptr = strtok(s1, " ,.");
	int count = 0;

	while (ptr != NULL)
	{
		if (strcmp(ptr, "the") == 0) count++;
		ptr = strtok(NULL, " ,.");
	}

	printf("%d", count);

	return 0;
}