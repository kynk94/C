// 다음 소스 코드를 완성하여 "n Wonderland", "nderland", "nd"이 각 줄마다 출력되게 만드세요.

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "Alice in Wonderland";

	char* ptr = strchr(s1, 'n');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'n');
	}

	return 0;
}