#include <stdio.h>

void ArrayInit();
void ArrayInitZero();
void ArrayLength();
void ArraySum();
void ArrayTimes2();
void ArrayToPointer();

int main() {
	//ArrayInit();
	//ArrayInitZero();
	//ArrayLength();
	//ArraySum();
	//ArrayTimes2();
	ArrayToPointer();

	return 0;
}

void ArrayInit() {
	//int numArr[10] = { 1, 3, 4, 6, 8, 9, 5, 33, 7, 19 };
	int numArr[] = { 1, 3, 4, 6, 8, 9, 5, 33, 7, 19 }; // 값을 다 입력하여 초기화한다면 배열의 크기를 생략할 수 있음
		
	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);

	// 배열의 범위를 벗어나도 컴파일 에러가 발생하지 않음, 쓰레기값 출력
	printf("%d\n", numArr[-1]); // 음수이므로 잘못된 인덱스
	printf("%d\n", numArr[10]); // 배열의 범위를 벗어난 인덱스
	printf("%d\n", numArr[20]); // 배열의 범위를 벗어난 인덱스
}

void ArrayInitZero() {
	int numArr[10] = { 0, };      // 배열의 요소를 모두 0으로 초기화

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
}

void ArrayLength() {
	int numArr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	printf("%d\n", sizeof(numArr)); // 40, 크기가 4byte인 int가 10개이므로 40, 배열이 메모리상 차지하는 공간
	printf("%d\n", sizeof(numArr) / sizeof(int)); // 10, 배열 길이를 알기 위해서는 요소의 크기로 나눠줘야 한다.
}

void ArraySum() {
	int numArr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
	int sum = 0;

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++) {
		sum += numArr[i];
	}

	printf("%d\n", sum);
}

void ArrayTimes2() {
	int numArr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
		
	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++) {
		numArr[i] *= 2;
	}

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++) {
		printf("%d\n", numArr[i]);
	}
}

void ArrayToPointer() {
	int numArr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
	int* numPtr = numArr;

	// 배열 자체는 포인터
	printf("%p\n", numArr);
	printf("%p\n", numPtr);

	printf("%d\n", *numArr); // 11, 1번째 값
	printf("%d\n", *numPtr); // 11, 1번째 값

	printf("%d\n", numPtr[5]); // 66, 해당 포인터를 배열과 동일하게 사용 가능

	printf("%d\n", sizeof(numArr)); // 40, 배열이 메모리상 차지하는 공간
	printf("%d\n", sizeof(numPtr)); // 4, 포인터의 크기
}