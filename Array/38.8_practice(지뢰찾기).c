/*
표준 입력으로 행렬의 크기 m, n과 문자(char) 행렬이 입력됩니다(m과 n의 범위는 3~10).
입력된 m, n은 공백으로 구분되며 행렬 안에서 *은 지뢰이고 .은 지뢰가 아닙니다.
지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력하는 프로그램을 만드세요.
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다.)

여러 줄을 입력 받으려면 다음과 같이 for 반복문으로 scanf를 반복 호출하면 됩니다.
for (int i = 0; i < m; i++)
{
	scanf("%s", matrix[i]);
}
행렬의 가로 공간에는 문자열이 들어갑니다.
따라서 메모리를 할당할 때는 n + 1(가로 크기 + 1)만큼 할당하여 NULL이 들어갈 공간까지 확보해야 합니다.
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