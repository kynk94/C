// 다음 소스 코드를 완성하여 16진 정수 0x1FACEFEE가 출력되게 만드세요.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "0x1facefee";
	int num1;

	num1 = strtol(s1, NULL, 16);

	printf("0x%X\n", num1);

	return 0;
}