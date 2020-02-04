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
	// strtok함수는 배열만 사용가능하며 포인터는 사용할 수 없음.
	// 동적 메모리를 할당한다면 포인터도 사용 가능하다.
	//char* s1 = "The Little Prince"; // 에러 발생, strtok함수는 공백을 NULL로 덮어쓰며 동작하므로 쓰기 작업에서 에러가 발생함
	char s1[30] = "The Little Prince";
	

	// 받은 문자열 내부의 각 문자에 대해 전부 자른다. 때문에 쌍따옴표를 사용한다.
	char* ptr = strtok(s1, " "); // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

	while (ptr != NULL)
	{
		printf("%s\n", ptr); // 자른 문자열 출력
		// NULL을 넣으면 이전에 처리한 부분의 다음 문자열을 잘라서 포인터를 반환
		// ptr + 1을 넣으면 The, he, e 를 출력. 한자리씩만 이동하다 공백을 만난 후 NULL로 바뀌기 때문에 이후는 진행되지 않음
		ptr = strtok(NULL, " ");
	}

	printf("%s", s1); // The만 출력됨. The 뒤의 공백이 NULL로 바뀌었기에 The에서 문자열이 종료된 것으로 인식
}

void time_slice()
{
	char s1[30] = "2015-06-10T15:32:19";

	char* ptr = strtok(s1, "-T:"); // -, T, : 으로 자른다.

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, "-T:");
	}
}

void store()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, }; // , 를 붙임으로써 배열의 모든 요소가 NULL로 초기화 된다.
	int i = 0;

	char* ptr = strtok(s1, " "); // 공백을 기준으로 자르기

	while (ptr != NULL)
	{
		sArr[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < 10; i++)
		if (sArr[i] != NULL) printf("%s\n", sArr[i]);
}
