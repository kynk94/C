#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strtok

void space_slice();
void time_slice();
void store();

int main()
{
	//space_slice();
	//time_slice();
	store();

	return 0;
}

void space_slice()
{
	// strtok�Լ��� �迭�� ��밡���ϸ� �����ʹ� ����� �� ����.
	// ���� �޸𸮸� �Ҵ��Ѵٸ� �����͵� ��� �����ϴ�.
	//char* s1 = "The Little Prince"; // ���� �߻�, strtok�Լ��� ������ NULL�� ����� �����ϹǷ� ���� �۾����� ������ �߻���
	char s1[30] = "The Little Prince";
	

	// ���� ���ڿ� ������ �� ���ڿ� ���� ���� �ڸ���. ������ �ֵ���ǥ�� ����Ѵ�.
	char* ptr = strtok(s1, " "); // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

	while (ptr != NULL)
	{
		printf("%s\n", ptr); // �ڸ� ���ڿ� ���
		// NULL�� ������ ������ ó���� �κ��� ���� ���ڿ��� �߶� �����͸� ��ȯ
		// ptr + 1�� ������ The, he, e �� ���. ���ڸ����� �̵��ϴ� ������ ���� �� NULL�� �ٲ�� ������ ���Ĵ� ������� ����
		ptr = strtok(NULL, " ");
	}

	printf("%s", s1); // The�� ��µ�. The ���� ������ NULL�� �ٲ���⿡ The���� ���ڿ��� ����� ������ �ν�
}

void time_slice()
{
	char s1[30] = "2015-06-10T15:32:19";

	char* ptr = strtok(s1, "-T:"); // -, T, : ���� �ڸ���.

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, "-T:");
	}
}

void store()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, }; // , �� �������ν� �迭�� ��� ��Ұ� NULL�� �ʱ�ȭ �ȴ�.
	int i = 0;

	char* ptr = strtok(s1, " "); // ������ �������� �ڸ���

	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < 10; i++)
		if (sArr[i] != NULL) printf("%s\n", sArr[i]);
}
