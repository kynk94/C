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

	printf("%p\n", &num1); // �ּҴ� %p �Ǵ� %x�� ����� ���
	printf("%p\n", numPtr);
	printf("%d\n", num1);
	printf("%d\n", *numPtr); // ������ ������ *

	numPtr = 0x00CCFC2C; // �ùٸ� �޸��ּ��� ��� �����Ϳ� ���� �Ҵ��� �� ����
	printf("%p\n", numPtr);
}

void ConstPointer1() {
	const int num1 = 10;
	const int* numPtr1; // num1�� �����ϰ� const int�� �����Ѵ�.

	numPtr1 = &num1;
	//*numPtr1 = 20; // ������ ����, num1�� ����̹Ƿ� �� ���� �Ұ���
}

void ConstPointer2() {
	int num1 = 10;
	int num2 = 20;
	int* const numPtr1 = &num1; // ��� ������ ����, �����͸� ����� �Ϸ��� ���� �������� const�� ���δ�.

	//numPtr1 = &num2; // ������ ����, �����Ͱ� ����̹Ƿ� �ּ� ���� �Ұ���
}

void ConstPointer3() {
	const int num1 = 10;
	const int num2 = 20;
	const int* const numPtr1 = &num1; // ��� ������ ����Ű�� ��� ������
	
	//*numPtr1 = 30; // ������ ����, num1�� ����̹Ƿ� �� ���� �Ұ���
	//numPtr1 = &num2; // ������ ����, �����Ͱ� ����̹Ƿ� �ּ� ���� �Ұ���
}

void VariousPointer() {
	// �ڷ����� ���� �޸� ���ٹ��� �޶����� ������, �ڷ����� �´� �����͸� �����ؾ� �Ѵ�.
	// �ڷ����� �ٸ���, �����Ϳ� �°� �ڷ��� ��ȯ�� �Ͼ��.
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
	void* ptr; // void ������ ����
	//void num2; // ������ ����, void�����δ� ���� ������ �Ұ����ϴ�.

	// ������ �ڷ����� �޶� ������ ������ �߻����� �ʴ´�.
	ptr = numPtr1;
	ptr = cPtr1;

	// ���������� ������ ������ �߻����� �ʴ´�.
	numPtr1 = ptr;
	cPtr1 = ptr;

	ptr = numPtr1;
	printf("%p\n", ptr);
	//printf("%d\n", *ptr); // ������ ����, void �����ʹ� ������ �Ұ���
}

void DoublePointer() {
	// * ������ŭ ���� ������ ����� �����ϴ�.
	int num1 = 10;
	int* numPtr1; // ���� ������
	int** numPtr2; // ���� ������

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", **numPtr2);
}