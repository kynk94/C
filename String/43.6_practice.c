/*
ǥ�� �Է����� 1�� 7 ������ ���ڿ� ���� 30 ������ ���ڿ��� �Էµ˴ϴ�.
���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ������ ���� ���Ӹ�(1st, 2nd, 3rd, 4th, 5th, 6th, 7th)�� �Էµ� ���ڿ��� ��µǰ� ���弼��.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	char name[31], result[40];

	scanf("%d %s", &number, name);

	if (number == 1) sprintf(result, "%dst %s", number, name);
	else if (number == 2) sprintf(result, "%dnd %s", number, name);
	else if (number == 3) sprintf(result, "%drd %s", number, name);
	else sprintf(result, "%dth %s", number, name);
	
	printf("%s\n", result);

	return 0;
}