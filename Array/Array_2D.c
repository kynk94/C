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
	int numArr[3][4] = { // ���� ũ�� 3, ���� ũ�� 4�� int�� 2���� �迭 ����
		{ 11, 22, 33, 44 },
		{ 55, 66, 77, 88 },
		{ 99, 110, 121, 132 }
	};

	printf("%d\n", sizeof(numArr)); // 48: 4byte int�� 12���̹Ƿ� 48

	int col = sizeof(numArr[0]) / sizeof(int);
	// 4: 2���� �迭�� ���� ũ�⸦ ���� ���� 
	// ���� �� ���� ũ�⸦ ����� ũ��� ������

	int row = sizeof(numArr) / sizeof(numArr[0]);
	// 3: 2���� �迭�� ���� ũ�⸦ ���� ���� 
	// �迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������

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
	int(*numPtr)[4] = numArr; // 2���� �迭�� �����ͷ� �����ϴ� ���, �迭 ũ�⸦ �ݵ�� ������� ��

	printf("%p\n", *numArr); // 1�� row�� �ּ�
	printf("%p\n", *numPtr); // 1�� row�� �ּ�

	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr)); // 48, �迭�� �޸𸮻� �����ϴ� ����
	printf("%d\n", sizeof(numPtr)); // 4, �������� ũ��
}

void Array3DToPointer() {
	int numArr[2][3][4];
	int(*numPtr)[3][4] = numArr; // 3���� �迭�� �����ͷ� �����ϴ� ���

	printf("%p\n", *numArr);
	printf("%p\n", *numPtr);
}