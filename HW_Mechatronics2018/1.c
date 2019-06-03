// scanf_s와 printf 함수를 활용하여 실수를 입력 받고 입력 받은 실수의 소수 부분을 출력하시오.
#include <stdio.h>
#include <math.h>

//floor를 활용하여 정수처리 하는 방법
void main() {
	double a, b;
	char c;
	int d = 1;

	//바로 또 다른 실수를 받을 수 있도록 while문 활용 (문제에 1회만 실시해라 라는 말이 없어서 사용함)
	while (d) {
		printf("실수를 입력하시오 : ");
		scanf_s("%lf", &a);
		while ((c = getchar()) != '\n' && c != EOF);

		//0이거나 양수일 경우
		if (a >= 0)	b = a - floor(a);
		//음수일 경우
		else b = 1 - a + floor(a);

		printf("Result : %lf\n", b);
	}
	//while을 안 쓸 경우 CMD가 바로 꺼지지 않게 pause 한다.
	//system("pause");
}

//double을 int로 바꾸어 정수처리 하는 방법 - 마찬가지로 잘 작동 됨
/*void main() {
	double a,b;
	char e;
	int c;
	int d = 1;

	//바로 또 다른 실수를 받을 수 있도록 while문 활용
	while(d) {
		printf("실수를 입력하시오 : ");
		scanf_s("%lf", &a);
		while ((e = getchar()) != '\n' && e != EOF);

		//0이거나 양수일 경우
		if (a >= 0) {
			c = a;
			b = a - c;
		}
		//음수일 경우
		else {
			c = -a;
			b = -a - c;
		}

		printf("Result : %lf\n",b);
	}
	//while을 안 쓸 경우 CMD가 바로 꺼지지 않게 pause 한다.
	//system("pause");
}*/