#include <stdio.h>
#include <string.h> // strchr, strstr

void search();
void search_from_right();
void search_string();

int main()
{
	//search();
	//search_from_right();
	search_string();

	return 0;
}

void search()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a'); // 'a'�� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

	while (ptr != NULL) // �˻��� ���ڿ��� ���� ������ �ݺ�
	{
		printf("%s\n", ptr); // arden Diary, ary
		ptr = strchr(ptr + 1, 'a'); // �����Ϳ� 1�� ���Ͽ� a �������� �˻�
	}
}

void search_from_right()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a'); // �����ʿ��� �������� 'a'�� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

	printf("%s\n", ptr); // ary
}

void search_string()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr); // den Diary
}

