/*
ǥ�� �Է����� ���� 30 ������ � ���ڿ��� �Էµ˴ϴ�.
���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ���ڿ� �ڿ� "th"�� �پ ��µǰ� ���弼��
(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];

	scanf("%s", s1);
	strcat(s1, "th");

	printf("%s\n", s1);

	return 0;
}