/*
ǥ�� �Է����� ���� 30 ������ � ���ڿ��� �Էµ˴ϴ�.
���� �ҽ� �ڵ带 �ϼ��Ͽ� �� printf�� ���� ���ڿ��� ����ϰ� ���弼��.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31];
	char s2[31];

	scanf("%s", s1);
	strcpy(s2, s1);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}