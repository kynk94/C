/*
표준 입력으로 10진 정수와 실수가 입력됩니다.
다음 소스 코드를 완성하여 입력된 정수와 실수가 문자열로 출력되게 만드세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	char s2[20];
	int num1;
	float num2;

	scanf("%d %f", &num1, &num2);

	sprintf(s1, "%d", num1);
	sprintf(s2, "%f", num2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}