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

	char* ptr = strchr(s1, 'a'); // 'a'로 시작하는 문자열 검색, 포인터 반환

	while (ptr != NULL) // 검색된 문자열이 없을 때까지 반복
	{
		printf("%s\n", ptr); // arden Diary, ary
		ptr = strchr(ptr + 1, 'a'); // 포인터에 1을 더하여 a 다음부터 검색
	}
}

void search_from_right()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a'); // 오른쪽에서 왼쪽으로 'a'로 시작하는 문자열 검색, 포인터 반환

	printf("%s\n", ptr); // ary
}

void search_string()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr); // den Diary
}

