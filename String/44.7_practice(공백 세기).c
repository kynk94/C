/*
ǥ�� �Է����� ���� 1,000 ������ ���ڿ��� �Էµ˴ϴ�.
�Էµ� ���ڿ����� ������ ������ ����ϴ� ���α׷��� ���弼��
(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

scanf���� ������ ������ ���ڿ��� �Է¹������� ���� �����ڷ� "%[^\n]s"�� ����ϸ� �˴ϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1001];
	int count = 0;

	scanf("%[^\n]s", s1);

	char* ptr = strchr(s1, ' ');

	while (ptr != NULL)
	{
		count++;
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d", count);

	return 0;
}