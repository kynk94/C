/*ǥ�� �Է����� �� ����(unsigned int)�� �Էµ˴ϴ�.
�Էµ� �� ������ ��Ʈ ���� ����� �� �ٿ� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

num1�� num2�� ��Ʈ XOR ����
num1�� num2�� ��Ʈ OR ����
num1�� num2�� ��Ʈ AND ����
num1�� ��Ʈ NOT ����

��� ����� ���� ������% u�� ����ϼ���.
���信�� C ��� �����Ϸ����� ���������� �����ϵǴ� ��ü �ڵ带 �Է��ؾ� �մϴ�.*/
#include <stdio.h>

int main() {
	unsigned int num1, num2;
	scanf_s("%u%u", &num1, &num2); // 1 2

	printf("%u\n", num1 ^ num2); // 3
	printf("%u\n", num1 | num2); // 3
	printf("%u\n", num1 & num2); // 0
	printf("%u\n", ~num1); // 4294967294

	return 0;
}