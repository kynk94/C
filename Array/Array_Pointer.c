#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����

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
	int* numPtr = malloc(sizeof(int) * 10); // int 10�� ũ�⸸ŭ ���� �޸� �Ҵ�

	numPtr[0] = 10;
	numPtr[9] = 20;

	printf("%d\n", numPtr[0]);
	printf("%d\n", numPtr[9]);
	printf("%p\n", numPtr);

	free(numPtr); // �������� �Ҵ��� �޸� ����
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
	// (3, 4) ��� �����
	int** m = malloc(sizeof(int*) * 3); // 2D�̹Ƿ� int �����Ϳ� �����ؾ���
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

	// ���� ���� �޸𸮸� ���� �����ؾ� ��.
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

	int** m = malloc(sizeof(int*) * row); // int ������ ũ�� * row
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

	// �޸� ����
	for (int i = 0; i < row; i++)
	{
		free(m[i]);
	}
	free(m);
}