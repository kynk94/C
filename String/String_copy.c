#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy, strcat
#include <stdlib.h> // malloc, free

void copy();
void pointer_copy();
void concat();

int main()
{
	//copy();
	//pointer_copy();
	concat();

	return 0;
}

void copy()
{
	char s1[10] = "Hello";
	//char* s2; ���ڿ� �����Ϳ� �����ϴ� ��쿡�� ���� �߻�. ������ ������, ���� �Ұ�.
	char s2[10];

	strcpy(s2, s1); // s2�� s1�� �����Ѵ�.

	printf("%s\n", s2);
}

void pointer_copy()
{
	char* s1 = "Hello";
	char* s2 = malloc(sizeof(char) * 10); // ���ڿ� �����Ϳ� ������ �Ҵ��� ���, ���� ����.

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);
}

void concat()
{
	// ���ڿ� �迭�� �ƴ϶� ���ڿ� �����Ͷ�� ������ �߻��Ѵ�.
	// ���ڿ� �����Ϳ� ������ �Ҵ��� ���, ���ڿ� ���̱Ⱑ �����ϴ�.
	char s1[10] = "World";
	char s2[20] = "Hello";

	// s2 �迭 ���� ���ڿ� �ڿ� s1 ���ڿ��� ���δ�.
	// �׷��Ƿ� s2�� ũ��� s1 + s2 + Null �̾�� �Ѵ�.
	strcat(s2, s1); 

	printf("%s", s2);
}