// 다음 소스 코드를 완성하여 실수 97.527824이 출력되게 만드세요.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "97.527824";
	float num1;

	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}