/*�ɺ��� ����� Ȱ���Ͽ� ���� ���̸� ���Ͻÿ�
code guide
A. �������� �Է¹��� ��
B. ���� ���̸� ���ϴ� �Լ��� ������ ��
C. �������� �� 3 �� �Է� �ް� ���� ���̸� 3 �� ���� ��*/
#include <stdio.h>
//math.h ���̺귯�� ���� double���� ��Ȯ�� PI���� M_PI�� �ҷ����� ���� define�Ѵ�.
#define _USE_MATH_DEFINES
#include <math.h>

//���� ���̸� ���ϴ� area�Լ� ����, �Ҽ������� �� �ʿ��ϹǷ� double�� �Ѵ�.
double area(double r) {
	return r = M_PI * pow(r, 2);
}

void main() {
	char c;
	double i, r, result;

	//for���� Ȱ���Ͽ� 3ȸ �ǽ��Ѵ�.
	for (i = 0; i < 3; i++) {
		printf("�������� �Է��Ͻÿ� : ");

	retyping:
		scanf_s("%lf", &r);
		while ((c = getchar()) != '\n' && c != EOF);

		if (r < 0) {
			printf("����� �Է��Ͻÿ� : ");
			goto retyping;
		}
		else {
			result = area(r);
			printf("���� ���� : %lf\n\n", result);
		}
	}
	//�Լ� ���� �� CMD�� �ٷ� ������ �ʰ� pause �Ѵ�.
	system("pause");
}