/*
다음 소스 코드를 완성하여 16진 정수, 10진 정수, 실수로 된 문자열이 숫자로 출력되게 만드세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[31];
	int num1;
	int num2;
	float num3;
	char* end;

	scanf("%[^\n]", s1);

	num1 = strtol(s1, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = strtof(end, NULL);

	printf("0x%x\n", num1);
	printf("%d\n", num2);
	printf("%f\n", num3);

	return 0;
}