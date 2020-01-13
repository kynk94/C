/*
ǥ�� �Է����� ���簢����� ũ�Ⱑ �Էµ˴ϴ�(�Է� ���� ������ 2~10).
�Էµ� ũ�⸸ŭ�� ��������� ����ϴ� ���α׷��� ���弼��.
(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�.)
���ڿ� ���� ���̴� �������� ���ϴ�.
��������� ���� ������ ������ �Ʒ������� �밢��(�ִ밢��)�� 1�̸� �������� ��� 0�� ����Դϴ�.
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