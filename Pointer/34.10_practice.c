/*표준 입력으로 정수가 입력됩니다.
다음 소스 코드를 완성하여 입력된 정수가 출력되게 만드세요.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int* numPtr1;
	int** numPtr2;
	int num1;

	scanf("%d", &num1);

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", **numPtr2);

	return 0;
}