/*
ǥ�� �Է����� ���� 30 ������ ���ڿ� �� ���� �Էµ˴ϴ�(�ԷµǴ� ���ڿ��� �������� ���е˴ϴ�).
�� ���ڿ��� ������ �ٸ��� �� ����� ������ ����ϴ� ���α׷��� ���弼��
(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31], s2[31];

	scanf("%s %s", s1, s2);

	printf("%d", strcmp(s1, s2));

	return 0;
}