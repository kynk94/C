/*
표준 입력으로 길이 30 이하의 문자열 두 개가 입력됩니다(입력되는 문자열은 공백으로 구분됩니다).
두 문자열이 같은지 다른지 비교 결과를 정수로 출력하는 프로그램을 만드세요
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31], s2[31];

	scanf("%s %s", s1, s2);

	printf("%d", strcmp(s1, s2));

	return 0;
}