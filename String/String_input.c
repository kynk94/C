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

	printf("���ڿ��� �Է��ϼ���: ");
	//scanf("%s", s1); // &�� �������� �ʴ� ���� ���� �迭�� �����Ϳ� ������ �� �� ����.
	scanf("%[^\n]s", s1); // ������ �����Ͽ� ���ڿ� �Է�.
	
	printf("%s\n", s1);
}

void string_input_pointer()
{
	char* s1 = "Hello";

	//scanf("%s", s1); // ���� �߻�. �����Ϳ� ������ ��� ���� �Ұ���.
}

void string_input_memory()
{
	char* s1 = malloc(sizeof(char) * 10);

	printf("���ڿ��� �Է��ϼ���: ");
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

