/*
표준 입력으로 정사각행렬의 크기가 입력됩니다(입력 값의 범위는 2~10).
입력된 크기만큼의 단위행렬을 출력하는 프로그램을 만드세요.
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다.)
숫자와 숫자 사이는 공백으로 띄웁니다.
단위행렬은 왼쪽 위부터 오른쪽 아래까지의 대각선(주대각선)이 1이며 나머지는 모두 0인 행렬입니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // memset

void solution_1();
void solution_2();

int main()
{
	//solution_1();
	solution_2();

	return 0;
}

void solution_1()
{
	int size;
	scanf("%d", &size);

	int** m = malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++)
	{
		m[i] = malloc(sizeof(int) * size);
		for (int j = 0; j < size; j++)
		{
			m[i][j] = 0;
		}
		m[i][i] = 1;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
		free(m[i]);
	}
	free(m);
}

void solution_2()
{
	int size;
	scanf("%d", &size);

	int** m = malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++)
	{
		m[i] = malloc(sizeof(int) * size);
		memset(m[i], 0, sizeof(int) * size);
		m[i][i] = 1;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
		free(m[i]);
	}
	free(m);
}