/*
표준 입력으로 어떤 문자열 네 개가 입력됩니다(각 문자열의 길이는 30 이하).
입력된 문자열 네 개를 각각 한 줄씩 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[31], s2[31], s3[31], s4[31];

	scanf("%s %s %s %s", s1, s2, s3, s4);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);

	return 0;
}