#include<stdio.h>

void IntPointer();
void ConstPointer1();
void ConstPointer2();
void ConstPointer3();
void VariousPointer();
void VoidPointer();
void DoublePointer();

int main() {
	//IntPointer();
	//ConstPointer1();
	//ConstPointer2();
	//ConstPointer3();
	//VariousPointer();
	//VoidPointer();
	DoublePointer();

	return 0;
}

void IntPointer() {
	int* numPtr;
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", &num1); // 주소는 %p 또는 %x를 사용해 출력
	printf("%p\n", numPtr);
	printf("%d\n", num1);
	printf("%d\n", *numPtr); // 역참조 연산자 *

	numPtr = 0x00CCFC2C; // 올바른 메모리주소의 경우 포인터에 직접 할당할 수 있음
	printf("%p\n", numPtr);
}

void ConstPointer1() {
	const int num1 = 10;
	const int* numPtr1; // num1과 동일하게 const int로 선언한다.

	numPtr1 = &num1;
	//*numPtr1 = 20; // 컴파일 에러, num1은 상수이므로 값 변경 불가능
}

void ConstPointer2() {
	int num1 = 10;
	int num2 = 20;
	int* const numPtr1 = &num1; // 상수 포인터 선언, 포인터를 상수로 하려면 가장 마지막에 const를 붙인다.

	//numPtr1 = &num2; // 컴파일 에러, 포인터가 상수이므로 주소 변경 불가능
}

void ConstPointer3() {
	const int num1 = 10;
	const int num2 = 20;
	const int* const numPtr1 = &num1; // 상수 변수를 가리키는 상수 포인터
	
	//*numPtr1 = 30; // 컴파일 에러, num1은 상수이므로 값 변경 불가능
	//numPtr1 = &num2; // 컴파일 에러, 포인터가 상수이므로 주소 변경 불가능
}

void VariousPointer() {
	// 자료형에 따라 메모리 접근법이 달라지기 때문에, 자료형에 맞는 포인터를 선언해야 한다.
	// 자료형이 다르면, 포인터에 맞게 자료형 변환이 일어난다.
	long long* numPtr1;
	float* numPtr2;
	char* cPtr1;
	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1); // 10
	printf("%f\n", *numPtr2); // 3.5
	printf("%c\n", *cPtr1); // a
}

void VoidPointer() {
	int num1 = 10;
	char c1 = 'a';
	int* numPtr1 = &num1;
	char* cPtr1 = &c1;
	void* ptr; // void 포인터 선언
	//void num2; // 컴파일 에러, void형으로는 변수 선언이 불가능하다.

	// 포인터 자료형이 달라도 컴파일 에러가 발생하지 않는다.
	ptr = numPtr1;
	ptr = cPtr1;

	// 마찬가지로 컴파일 에러가 발생하지 않는다.
	numPtr1 = ptr;
	cPtr1 = ptr;

	ptr = numPtr1;
	printf("%p\n", ptr);
	//printf("%d\n", *ptr); // 컴파일 에러, void 포인터는 역참조 불가능
}

void DoublePointer() {
	// * 개수만큼 다중 포인터 사용이 가능하다.
	int num1 = 10;
	int* numPtr1; // 단일 포인터
	int** numPtr2; // 이중 포인터

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", **numPtr2);
}