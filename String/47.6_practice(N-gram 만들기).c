/*
ǥ�� �Է����� ������ ���� 10 ������ ���ڿ��� �Էµ˴ϴ�.
�Էµ� ���ڿ��� ������ŭ ���� ������ N-gram�� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
���� �Էµ� ���ڿ��� ���̰� �Էµ� ���� �̸��̶�� wrong�� ����ϼ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int num, length;
	char text[11];

	scanf("%d %s", &num, text);
	length = strlen(text);

	if (length < num)
		printf("wrong\n");
	else
	{
		for (int i = 0; i < length - num + 1; i++)
		{
			for (int j = 0; j < num; j++)
				printf("%c", text[i + j]);
			printf("\n");
		}
	}

	return 0;
}
