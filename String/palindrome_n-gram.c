#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void is_palindrome();
void ngram_character();
void ngram_word();

int main()
{
	//is_palindrome();
	//ngram_character();
	ngram_word();

	return 0;
}

void is_palindrome()
{
	char word[30];
	int length;
	bool palindrome = true;

	printf("단어를 입력하세요: ");
	scanf("%s", word);

	length = strlen(word);

	for (int i = 0; i < length / 2; i++)
	{
		if (word[i] != word[length - i - 1])
		{
			palindrome = false;
			break;
		}
	}

	printf("%d\n", palindrome);
}

void ngram_character()
{
	char text[30] = "Hello";
	int length = strlen(text);

	for (int i = 0; i < length - 1; i++)
		printf("%c%c\n", text[i], text[i + 1]);
}

void ngram_word()
{
	char text[100] = "this is c language";
	char* tokens[30] = { NULL, };
	int count = 0;

	char* ptr = strtok(text, " ");

	while (ptr != NULL)
	{
		tokens[count] = ptr;
		count++;
		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < count - 1; i++)
		printf("%s %s\n", tokens[i], tokens[i + 1]);
}