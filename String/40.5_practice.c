// 다음 소스 코드를 완성하여 표준 입력으로 입력받은 문자열이 그대로 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];

	printf("문자열을 입력하세요: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	return 0;
}