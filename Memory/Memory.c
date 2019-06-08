#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언됨
#include <string.h> // memset 함수가 선언됨

void MemoryAllocate();
void MemoryValue();
void MemorySet();
void NullPointer();

int main() {
	//MemoryAllocate();
	//MemoryValue();
	//MemorySet();
	NullPointer();
	return 0;
}

void MemoryAllocate() {
	int num1 = 20;
	int* numPtr1;
	int* numPtr2;

	numPtr1 = &num1; // stack 메모리 사용
	numPtr2 = malloc(sizeof(int)); // heap 메모리 사용, int 크기인 4byte(32bit)만큼 동적 메모리 할당

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2); // 동적 할당한 메모리 해제, 해제하지 않으면 메모리 누수 문제 발생
	printf("%p\n", numPtr2); // 메모리 크기만 해제했을 뿐 주소는 유지됨
}

void MemoryValue() {
	int* numPtr;

	numPtr = malloc(sizeof(int));
	*numPtr = 10; // 역참조로 값 할당

	printf("%d\n", *numPtr);
	free(numPtr);
}

void MemorySet() {
	long long* numPtr = malloc(sizeof(long long)); // 8byte만큼 메모리 할당

	memset(numPtr, 0x27, 8); // 포인터, 값, 메모리 크기, 16진수 27을 8byte만큼(27이 8개) 할당한다.

	printf("0x%llx\n", *numPtr);
	free(numPtr);
}

void NullPointer() {
	int* numPtr1 = NULL;

	printf("%p\n", numPtr1); // 0000 0000

	if (numPtr1 == NULL) numPtr1 = malloc(1024); // NullPointer의 사용, NULL이면 ~의 메모리 할당
	free(numPtr1);
}