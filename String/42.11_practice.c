/*
표준 입력으로 길이 30 이하의 어떤 문자열이 입력됩니다.
다음 소스 코드를 완성하여 입력된 문자열 뒤에 "th"가 붙어서 출력되게 만드세요
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];

	scanf("%s", s1);
	strcat(s1, "th");

	printf("%s\n", s1);

	return 0;
}