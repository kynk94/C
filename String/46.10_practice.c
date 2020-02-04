// 다음 소스 코드를 완성하여 실수 29.977213, 4528.112305가 각 줄 마다 출력되게 만드세요.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "29.977213 4528.112305";
	float num1, num2;
	char* end;

	num1 = strtof(s1, &end);
	num2 = strtof(end, NULL);

	printf("%f\n", num1);
	printf("%f\n", num2);

	return 0;
}