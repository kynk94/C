/*
ǥ�� �Է����� ����� ũ�� m, n�� ����(char) ����� �Էµ˴ϴ�(m�� n�� ������ 3~10).
�Էµ� m, n�� �������� ���еǸ� ��� �ȿ��� *�� �����̰� .�� ���ڰ� �ƴմϴ�.
���ڰ� �ƴ� ��ҿ��� ������ ������ ������ ����ϴ� ���α׷��� ���弼��.
(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�.)

���� ���� �Է� �������� ������ ���� for �ݺ������� scanf�� �ݺ� ȣ���ϸ� �˴ϴ�.
for (int i = 0; i < m; i++)
{
	scanf("%s", matrix[i]);
}
����� ���� �������� ���ڿ��� ���ϴ�.
���� �޸𸮸� �Ҵ��� ���� n + 1(���� ũ�� + 1)��ŭ �Ҵ��Ͽ� NULL�� �� �������� Ȯ���ؾ� �մϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free

int main() {
	int row, col;
	scanf("%d %d", &row, &col);

	char** mat = malloc(sizeof(char*) * row);
	for (int i = 0; i < row; i++)
	{
		mat[i] = malloc(sizeof(char) * (col + 1));
		scanf("%s", mat[i]);
	}

	for (int m = 0; m < row; m++)
	{
		for (int n = 0; n < col; n++)
		{
			if (mat[m][n] != '*')
			{
				char c_count[2];
				int count = 0;
				for (int i = m - 1; i < m + 2; i++)
				{
					if (0 <= i && i < row)
					{
						for (int j = n - 1; j < n + 2; j++)
						{
							if (0 <= j && j < col && mat[i][j] == '*') count++;
						}
					}
				}
				sprintf(c_count, "%d", count);
				mat[m][n] = c_count[0];
			}
		}
	}

	for (int m = 0; m < row; m++)
	{
		for (int n = 0; n < col; n++)
		{
			printf("%c", mat[m][n]);
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++)
	{
		free(mat[i]);
	}
	free(mat);

	return 0;
}