#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char text[31];
	scanf("%[^\n]s", text);

	int length = strlen(text);
	bool is_palindrome = true;

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		while (text[start] == ' ' && start < end) start++;
		while (text[end] == ' ' && start < end) end--;
		if (text[start] != text[end])
		{
			is_palindrome = false;
			break;
		}
		start++;
		end--;
	}

	printf("%d\n", is_palindrome);

	return 0;
}