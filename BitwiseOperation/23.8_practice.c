/*표준 입력으로 두 정수(unsigned int)가 입력됩니다.
입력된 두 정수의 비트 연산 결과를 각 줄에 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

num1과 num2을 비트 XOR 연산
num1과 num2을 비트 OR 연산
num1과 num2를 비트 AND 연산
num1을 비트 NOT 연산

출력 결과는 서식 지정자% u를 사용하세요.
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.*/
#include <stdio.h>

int main() {
	unsigned int num1, num2;
	scanf_s("%u%u", &num1, &num2); // 1 2

	printf("%u\n", num1 ^ num2); // 3
	printf("%u\n", num1 | num2); // 3
	printf("%u\n", num1 & num2); // 0
	printf("%u\n", ~num1); // 4294967294

	return 0;
}