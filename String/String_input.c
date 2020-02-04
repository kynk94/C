#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void string_input();
void string_input_pointer();
void string_input_memory();
void string_two_input();

int main()
{
	//string_input();
	//string_input_pointer();
	//string_input_memory();
	string_two_input();

	return 0;
}

void string_input()
{
	char s1[10];

	printf("문자열을 입력하세요: ");
	//scanf("%s", s1); // &로 저장하지 않는 것을 보아 배열은 포인터와 같음을 알 수 있음.
	scanf("%[^\n]s", s1); // 공백을 포함하여 문자열 입력.
	
	printf("%s\n", s1);
}

void string_input_pointer()
{
	char* s1 = "Hello";

	//scanf("%s", s1); // 에러 발생. 포인터에 저장한 경우 쓰기 불가능.
}

void string_input_memory()
{
	char* s1 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하세요: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	free(s1);
}

void string_two_input()
{
	char s1[10], s2[10];

	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);
}

