#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� �����
#include <string.h> // memset �Լ��� �����

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

	numPtr1 = &num1; // stack �޸� ���
	numPtr2 = malloc(sizeof(int)); // heap �޸� ���, int ũ���� 4byte(32bit)��ŭ ���� �޸� �Ҵ�

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2); // ���� �Ҵ��� �޸� ����, �������� ������ �޸� ���� ���� �߻�
	printf("%p\n", numPtr2); // �޸� ũ�⸸ �������� �� �ּҴ� ������
}

void MemoryValue() {
	int* numPtr;

	numPtr = malloc(sizeof(int));
	*numPtr = 10; // �������� �� �Ҵ�

	printf("%d\n", *numPtr);
	free(numPtr);
}

void MemorySet() {
	long long* numPtr = malloc(sizeof(long long)); // 8byte��ŭ �޸� �Ҵ�

	memset(numPtr, 0x27, 8); // ������, ��, �޸� ũ��, 16���� 27�� 8byte��ŭ(27�� 8��) �Ҵ��Ѵ�.

	printf("0x%llx\n", *numPtr);
	free(numPtr);
}

void NullPointer() {
	int* numPtr1 = NULL;

	printf("%p\n", numPtr1); // 0000 0000

	if (numPtr1 == NULL) numPtr1 = malloc(1024); // NullPointer�� ���, NULL�̸� ~�� �޸� �Ҵ�
	free(numPtr1);
}