/*
표준 입력으로 1과 7 사이의 숫자와 길이 30 이하의 문자열이 입력됩니다.
다음 소스 코드를 완성하여 입력된 숫자의 서수 줄임말(1st, 2nd, 3rd, 4th, 5th, 6th, 7th)과 입력된 문자열이 출력되게 만드세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	char name[31], result[40];

	scanf("%d %s", &number, name);

	if (number == 1) sprintf(result, "%dst %s", number, name);
	else if (number == 2) sprintf(result, "%dnd %s", number, name);
	else if (number == 3) sprintf(result, "%drd %s", number, name);
	else sprintf(result, "%dth %s", number, name);
	
	printf("%s\n", result);

	return 0;
}