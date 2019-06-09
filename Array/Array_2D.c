#include <stdio.h>

void Array2D();
void Array2DToPointer();
void Array3DToPointer();

int main() {
	//Array2D();
	//Array2DToPointer();
	Array3DToPointer();

	return 0;
}

void Array2D() {
	int numArr[3][4] = { // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr)); // 48: 4byte int가 12개이므로 48

	int col = sizeof(numArr[0]) / sizeof(int);
	// 4: 2차원 배열의 가로 크기를 구할 때는 
	// 가로 한 줄의 크기를 요소의 크기로 나눠줌

	int row = sizeof(numArr) / sizeof(numArr[0]);
	// 3: 2차원 배열의 세로 크기를 구할 때는 
	// 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌

	printf("Col : %d\n", col); // 4
	printf("Row : %d\n", row); // 3

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
}

void Array2DToPointer() {
	int numArr[3][4] = {
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};
	int(*numPtr)[4] = numArr; // 2차원 배열을 포인터로 지정하는 방법, 배열 크기를 반드시 정해줘야 함

	printf("%p\n", *numArr); // 1번 row의 주소
	printf("%p\n", *numPtr); // 1번 row의 주소

	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr)); // 48, 배열이 메모리상 차지하는 공간
	printf("%d\n", sizeof(numPtr)); // 4, 포인터의 크기
}

void Array3DToPointer() {
	int numArr[2][3][4];
	int(*numPtr)[3][4] = numArr; // 3차원 배열을 포인터로 지정하는 방법

	printf("%p\n", *numArr);
	printf("%p\n", *numPtr);
}