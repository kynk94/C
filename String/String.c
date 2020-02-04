#include <stdio.h>

void string();
void string_assign();
void string_assign_array();

int main()
{
	//string();
	//string_assign();
	string_assign_array();

	return 0;
}

void string()
{
	char c1 = 'a'; // C��� char�� '' �ȿ� �Է��ؾ���
	char* s1 = "Hello"; // string�� "" �ȿ� �Է��ؾ���

	printf("%c\n", c1);
	printf("%s\n", s1);
	printf("%p\n", s1);

	for (int i = 0; i < 5; i++) // i�� 5�϶��� NULL�� ��µȴ�. ȭ�鿡 ǥ�� X
	{
		printf("%c\n", s1[i]);
	}
}

void string_assign()
{
	char* s1 = "Hello";

	s1[0] = 'A'; // �Ҵ� �������� ������ �߻��Ѵ�. ���ڿ� �����ʹ� �б� �����̱� �����̴�.

	printf("%c\n", s1[0]);
}

void string_assign_array()
{
	// �߸��� ���
	//char s1[3] = "Hello"; // �������� ������, �̻��� ���ڰ� ����� �ȴ�. NULL�� �����Ͽ� 6 �̻��� ũ��� �����ؾ��Ѵ�.

	// ���� �۵�
	//char s1[10] = "Hello"; // �迭�� ���ڿ� ����
	char s1[] = "Hello"; // ũ�⸦ �����ϸ� �ڵ����� 6�� ũ��� �����ȴ�.

	//s1 = "World"; // �̹� ����� �迭�� ���� �Ҵ� �Ұ���.
	s1[0] = 'A'; // ���� �۵�, �ϳ��ϳ��� �����Ͽ� �Ҵ��ϴ� ���� �����ϴ�.

	printf("%s\n", s1); // Aello ���
}