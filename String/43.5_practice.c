// 다음 소스 코드를 완성하여 10, 20, 30, c, 99가 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];

	sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99);

	printf("%s\n", s1);

	return 0;
}