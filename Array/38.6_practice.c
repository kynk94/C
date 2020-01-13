// 다음 소스 코드를 완성하여 포인터에 할당된 메모리를
// 높이 2, 세로 크기 3, 가로 크기 5인 3차원 배열처럼 사용할 수 있도록 만드세요.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long*** m = malloc(sizeof(long long**) * 2);

	for (int i = 0; i < 2; i++)
	{
		m[i] = malloc(sizeof(long long*) * 3);
		for (int j = 0; j < 3; j++)
		{
			m[i][j] = malloc(sizeof(long long) * 5);
		}
	}

	m[1][2][4] = 100;

	printf("%lld\n", m[1][2][4]);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			free(m[i][j]);
		}
		free(m[i]);
	}
	free(m);

	return 0;
}