#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf
#include <stdlib.h>

void format();
void format_various();

int main()
{
	//format();
	format_various();

	return 0;
}

void format()
{
	char s1[20];
	//char* s1 = malloc(sizeof(char) * 20);

	sprintf(s1, "Hello, %s", "world!");

	printf("%s", s1);

	//free(s1);
}

void format_various()
{
	char s1[30];

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

	printf("%s", s1);
}