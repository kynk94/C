/*�� ���� ���� ����ϴ� �Լ��� �����Ͻÿ�
code guide
A. �Է��� ���� �Էº��� 2 ���� ����� ������ ��� ���� 1 ���� ������ ��
B. C all by value ��İ� Call by reference ��� �� �Լ��� ���� ������ ��
- hint -
���� �Լ��� ��ȯ���� �Ű����� ������ �ٸ��� ����*/
#include <stdio.h>
#include <math.h>

double call_by_value(double a, double b) {
	double result = a + b;
	return result;
}
void call_by_reference(double *a, double *b, double *result) {
	*result = *a + *b;
}
void main() {
	double a, b, c, d, result;

	printf("2���� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &a, &b);
	while ((c = getchar()) != '\n' && c != EOF);
	
	printf("��� �����Ͻðڽ��ϱ�?\n1.Call by Value\n2.Call by Reference\nType 1 or 2\n");
	
retyping:
	scanf_s("%lf", &d);
	while ((c = getchar()) != '\n' && c != EOF);
	
	if (d == 1)	result = call_by_value(a, b);
	else if (d == 2) call_by_reference(&a, &b, &result);
	//�̻��� ���� �޾��� ��� ���Է� �䱸
	else {
		printf("�ٽ� �Է��� �ֽʽÿ�.\nType 1 or 2\n");
		goto retyping;
	}
	
	printf("%lf + %lf = %lf\n", a, b, result);
	system("pause");
}