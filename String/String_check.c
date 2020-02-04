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

	printf("%zd\n", strlen(s1)); // �����Ͷ� ���̸� ������, ���ڿ��� ���̴� Null�� Ȯ���ϹǷ� 5�� ��µȴ�.
	printf("%zd\n", strlen(s2)); // s2 �迭�� ũ�Ⱑ 10 ������, ���ڿ��� ���̴� Null�� Ȯ���ϹǷ� 5�� ��µȴ�.
}

void str_compare()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";
	char s3[10] = "Hell";

	// ������ 0, ���� ũ�� 1 �ڰ� ũ�� -1 ��ȯ
	// linux�� (�� - ��) ���� ��ȯ
	int ret1 = strcmp(s1, s2);
	int ret2 = strcmp(s1, s3); // "o" -> 111, Null -> 0 �̹Ƿ� ���� ũ��.

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

	printf("���ڿ� �� ���� �Է��ϼ���: ");
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