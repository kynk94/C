// scanf_s�� printf �Լ��� Ȱ���Ͽ� �Ǽ��� �Է� �ް� �Է� ���� �Ǽ��� �Ҽ� �κ��� ����Ͻÿ�.
#include <stdio.h>
#include <math.h>

//floor�� Ȱ���Ͽ� ����ó�� �ϴ� ���
void main() {
	double a, b;
	char c;
	int d = 1;

	//�ٷ� �� �ٸ� �Ǽ��� ���� �� �ֵ��� while�� Ȱ�� (������ 1ȸ�� �ǽ��ض� ��� ���� ��� �����)
	while (d) {
		printf("�Ǽ��� �Է��Ͻÿ� : ");
		scanf_s("%lf", &a);
		while ((c = getchar()) != '\n' && c != EOF);

		//0�̰ų� ����� ���
		if (a >= 0)	b = a - floor(a);
		//������ ���
		else b = 1 - a + floor(a);

		printf("Result : %lf\n", b);
	}
	//while�� �� �� ��� CMD�� �ٷ� ������ �ʰ� pause �Ѵ�.
	//system("pause");
}

//double�� int�� �ٲپ� ����ó�� �ϴ� ��� - ���������� �� �۵� ��
/*void main() {
	double a,b;
	char e;
	int c;
	int d = 1;

	//�ٷ� �� �ٸ� �Ǽ��� ���� �� �ֵ��� while�� Ȱ��
	while(d) {
		printf("�Ǽ��� �Է��Ͻÿ� : ");
		scanf_s("%lf", &a);
		while ((e = getchar()) != '\n' && e != EOF);

		//0�̰ų� ����� ���
		if (a >= 0) {
			c = a;
			b = a - c;
		}
		//������ ���
		else {
			c = -a;
			b = -a - c;
		}

		printf("Result : %lf\n",b);
	}
	//while�� �� �� ��� CMD�� �ٷ� ������ �ʰ� pause �Ѵ�.
	//system("pause");
}*/