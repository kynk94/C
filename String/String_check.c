#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen, strcmp

void str_len();
void str_compare();
void str_compare_ascii();
void str_compare_input();

int main()
{
	//str_len();
	//str_compare();
	//str_compare_ascii();
	str_compare_input();

	return 0;
}

void str_len()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("%zd\n", strlen(s1)); // 포인터라서 길이를 모르지만, 문자열의 길이는 Null로 확인하므로 5가 출력된다.
	printf("%zd\n", strlen(s2)); // s2 배열의 크기가 10 이지만, 문자열의 길이는 Null로 확인하므로 5가 출력된다.
}

void str_compare()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";
	char s3[10] = "Hell";

	// 같으면 0, 앞이 크면 1 뒤가 크면 -1 반환
	// linux는 (앞 - 뒤) 값을 반환
	int ret1 = strcmp(s1, s2);
	int ret2 = strcmp(s1, s3); // "o" -> 111, Null -> 0 이므로 앞이 크다.

	printf("%d\n", ret1);
	printf("%d\n", ret2);
}

void str_compare_ascii()
{
	/*
	"aaa" -> 97 97 97
	"aab" -> 97 97 98
	"aac" -> 97 97 99
	" " -> 32
	Null -> 0
	*/
	printf("%d\n", strcmp("aaa", "aaa")); // 0
	printf("%d\n", strcmp("aab", "aaa")); // 1, b > a
	printf("%d\n", strcmp("aab", "aac")); // -1, b < c
}

void str_compare_input()
{
	char s1[20], s2[20];

	printf("문자열 두 개를 입력하세요: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);

	if (ret == 0)
	{
		printf("s1 == s2\n");
	}
	else if (ret > 0)
	{
		printf("s1 > s2\n");
	}
	else
	{
		printf("s1 < s2\n");
	}
}