/*���� �ҽ� �ڵ带 �ϼ��Ͽ� �迭�� ����� 2������ 10������ ��µǰ� ���弼��.
2������ �迭�� ������� ����Ǿ� �ֽ��ϴ�.*/
#include <stdio.h>

int main() {
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };    // 1101 ������� �����

	int position = 0;
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--) {
		if (binary[i] == 1) {
			/*
			for (int j = 0; j < position; j++) {
				binary[i] *= 2;
			}
			decimal += binary[i];
			*/
			decimal += 1 << position; // �� �۾��� ��Ʈ�����ڷ� ������ �� �� ����
		}
		position++;
	}
	printf("%d\n", decimal);

	return 0;
}