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
	char c1 = 'a'; // C언어 char는 '' 안에 입력해야함
	char* s1 = "Hello"; // string은 "" 안에 입력해야함

	printf("%c\n", c1);
	printf("%s\n", s1);
	printf("%p\n", s1);

	for (int i = 0; i < 5; i++) // i가 5일때는 NULL이 출력된다. 화면에 표시 X
	{
		printf("%c\n", s1[i]);
	}
}

void string_assign()
{
	char* s1 = "Hello";

	s1[0] = 'A'; // 할당 과정에서 에러가 발생한다. 문자열 포인터는 읽기 전용이기 때문이다.

	printf("%c\n", s1[0]);
}

void string_assign_array()
{
	// 잘못된 방식
	//char s1[3] = "Hello"; // 컴파일은 되지만, 이상한 문자가 출력이 된다. NULL을 포함하여 6 이상의 크기로 선언해야한다.

	// 정상 작동
	//char s1[10] = "Hello"; // 배열로 문자열 선언
	char s1[] = "Hello"; // 크기를 생략하면 자동으로 6의 크기로 지정된다.

	//s1 = "World"; // 이미 선언된 배열에 새로 할당 불가능.
	s1[0] = 'A'; // 정상 작동, 하나하나에 접근하여 할당하는 것은 가능하다.

	printf("%s\n", s1); // Aello 출력
}