/*다음 소스 코드를 완성하여 배열에 저장된 2진수가 10진수로 출력되게 만드세요.
2진수는 배열에 순서대로 저장되어 있습니다.*/
#include <stdio.h>

int main() {
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

	int position = 0;
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--) {
		if (binary[i] == 1) {
			/*
			for (int j = 0; j < position; j++) {
				binary[i] *= 2;
			}
			decimal += binary[i];
			*/
			decimal += 1 << position; // 위 작업을 비트연산자로 간단히 할 수 있음
		}
		position++;
	}
	printf("%d\n", decimal);

	return 0;
}