#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

void dynamic_array();
void dynamic_scanf();
void dynamic_array_2D();
void dynamic_scanf_2D();

int main()
{
	//dynamic_array();
	//dynamic_scanf();
	//dynamic_array_2D();
	dynamic_scanf_2D();

	return 0;
}

void dynamic_array()
{
	int* numPtr = malloc(sizeof(int) * 10); // int 10개 크기만큼 동적 메모리 할당

	numPtr[0] = 10;
	numPtr[9] = 20;

	printf("%d\n", numPtr[0]);
	printf("%d\n", numPtr[9]);
	printf("%p\n", numPtr);

	free(numPtr); // 동적으로 할당한 메모리 해제
}

void dynamic_scanf()
{
	int size;
	scanf("%d", &size);

	int* numPtr = malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++)
	{
		numPtr[i] = i;
	}
	
	for (int i = 0; i < size; i++)
	{
		printf("%d ", numPtr[i]);
	}
	
	free(numPtr);
}

void dynamic_array_2D()
{
	// (3, 4) 행렬 만들기
	int** m = malloc(sizeof(int*) * 3); // 2D이므로 int 포인터에 적용해야함
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;
	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);

	// 가로 공간 메모리를 먼저 해제해야 함.
	for (int i = 0; i < 3; i++)
	{
		free(m[i]);
	}
	free(m);
}

void dynamic_scanf_2D()
{
	int row, col;
	scanf("%d %d", &row, &col);

	int** m = malloc(sizeof(int*) * row); // int 포인터 크기 * row
	for (int i = 0; i < row; i++)
	{
		m[i] = malloc(sizeof(int) * col);
	}

	for(int i=0;i<row;i++)
	{
		for (int j = 0; j < col; j++)
		{
			m[i][j] = i + j;
		}
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	// 메모리 해제
	for (int i = 0; i < row; i++)
	{
		free(m[i]);
	}
	free(m);
}