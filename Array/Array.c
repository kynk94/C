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
	int numArr[] = { 1, 3, 4, 6, 8, 9, 5, 33, 7, 19 }; // ���� �� �Է��Ͽ� �ʱ�ȭ�Ѵٸ� �迭�� ũ�⸦ ������ �� ����
		
	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);

	// �迭�� ������ ����� ������ ������ �߻����� ����, �����Ⱚ ���
	printf("%d\n", numArr[-1]); // �����̹Ƿ� �߸��� �ε���
	printf("%d\n", numArr[10]); // �迭�� ������ ��� �ε���
	printf("%d\n", numArr[20]); // �迭�� ������ ��� �ε���
}

void ArrayInitZero() {
	int numArr[10] = { 0, };      // �迭�� ��Ҹ� ��� 0���� �ʱ�ȭ

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
}

void ArrayLength() {
	int numArr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	printf("%d\n", sizeof(numArr)); // 40, ũ�Ⱑ 4byte�� int�� 10���̹Ƿ� 40, �迭�� �޸𸮻� �����ϴ� ����
	printf("%d\n", sizeof(numArr) / sizeof(int)); // 10, �迭 ���̸� �˱� ���ؼ��� ����� ũ��� ������� �Ѵ�.
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

	// �迭 ��ü�� ������
	printf("%p\n", numArr);
	printf("%p\n", numPtr);

	printf("%d\n", *numArr); // 11, 1��° ��
	printf("%d\n", *numPtr); // 11, 1��° ��

	printf("%d\n", numPtr[5]); // 66, �ش� �����͸� �迭�� �����ϰ� ��� ����

	printf("%d\n", sizeof(numArr)); // 40, �迭�� �޸𸮻� �����ϴ� ����
	printf("%d\n", sizeof(numPtr)); // 4, �������� ũ��
}