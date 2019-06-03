/*code guide
A. 연산자 와 두 숫자를 입력받고 연산자에 따라 원하는 연산을 수행할 것
B. 연산 결과를 출력하고 다시 새로운 연산자를 입력 받아 연산할 것
C. A,B 를 무한히 반복하되 q 를 입력 받으면 연산을 종료할 것
D. 연산 종료 시 이전까지의 결과값을 모두 출력할 것
- hint -
반복문 구성 시 무한 반복 조건과 탈출 조건을 활용
연산마다 결과를 저장해 둘 것
반복문에서 scanf_s 호출 시, 다음 줄에 rewind(stdin) 함수를 반드시 호출할 것
(scanf_s 함수의 특징 때문에 발생하는 버퍼상의 문제를 해결하기 위해)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//while ((c = getchar()) != '\n' && c != EOF);는 버퍼를 지우는 구간이다.

void main() {
	char a, c;
	double b, d;
	double result = 0;
	//C언어는 동적 변수명 생성이 불가능하다. 때문에 어쩔 수 없이 단순하게 배열 길이를 100으로 줬다.
	//이 경우 남는 배열은 계속 잡아먹고 있게 되는 아주 큰 단점이 있다.
	double res[100];
	int i = 1;
	int j = 0;
	int k = 0;

	while (i) {
		int e = 1;
		int f = 1;

		printf("연산자를 입력하시오(+,-,*,/) : ");

	retyping:
		scanf_s("%c", &a);
		while ((c = getchar()) != '\n' && c != EOF);

		if (a != '+' && a != '-' && a != '*' && a != '/' && a != 'q') {
			printf("다시 입력하시오 : ");
			goto retyping;
		}

		//q를 받으면 모두 0으로 보내 while을 바로 빠져나가도록 한다.
		if (a == 'q') {
			i = 0;
			e = 0;
			f = 0;
		}

		//goto는 많이 쓰면 어디가 어디인지 찾을 수가 없어 해당 프로그램에서만 쓸 수 있게 되기에 이식 등에 안좋다. 때문에 if로 사용한다.
		if (e == 1) {
			printf("두 수를 입력하시오 : ");
			scanf_s("%lf %lf", &b, &d);
			while ((c = getchar()) != '\n' && c != EOF);

			//if, else if를 쓸 수 있지만 편의를 위해 switch를 사용한다.
			switch (a) {
			case '+':
				result = b + d;
				break;
			case '-':
				result = b - d;
				break;
			case '*':
				result = b * d;
				break;
			case '/':
				result = b / d;
				break;
			}
		}

		//각 배열에 결과를 저장하는 방법
		res[j] = result;
		if (f == 1)	printf("결과 : %lf\n\n", result);
		else {
			//for를 활용하여 지금까지의 결과를 순서대로 출력한다.
			for (k = 0; k < j; k++)	printf("%d 번째 결과 : %lf\n",k+1,res[k]);
		}

		//루프마다 1씩 더해 배열에 결과값 저장을 가능하게 한다.
		j++;
	}
	//종료 후 바로 꺼지지 않도록 pause 한다.
	system("pause");
}