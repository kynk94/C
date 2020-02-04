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
	//char* s2; 문자열 포인터에 복사하는 경우에는 에러 발생. 공간이 없으며, 쓰기 불가.
	char s2[10];

	strcpy(s2, s1); // s2에 s1을 복사한다.

	printf("%s\n", s2);
}

void pointer_copy()
{
	char* s1 = "Hello";
	char* s2 = malloc(sizeof(char) * 10); // 문자열 포인터에 공간을 할당한 경우, 쓰기 가능.

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);
}

void concat()
{
	// 문자열 배열이 아니라 문자열 포인터라면 에러가 발생한다.
	// 문자열 포인터에 공간을 할당한 경우, 문자열 붙이기가 가능하다.
	char s1[10] = "World";
	char s2[20] = "Hello";

	// s2 배열 안의 문자열 뒤에 s1 문자열을 붙인다.
	// 그러므로 s2의 크기는 s1 + s2 + Null 이어야 한다.
	strcat(s2, s1); 

	printf("%s", s2);
}