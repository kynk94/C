/*심볼릭 상수를 활용하여 원의 넓이를 구하시오
code guide
A. 반지름을 입력받을 것
B. 원의 넓이를 구하는 함수를 정의할 것
C. 반지름을 총 3 번 입력 받고 원의 넓이를 3 번 구할 것*/
#include <stdio.h>
//math.h 라이브러리 내의 double형의 정확한 PI값인 M_PI를 불러오기 위해 define한다.
#define _USE_MATH_DEFINES
#include <math.h>

//원의 넓이를 구하는 area함수 선언, 소수점까지 다 필요하므로 double로 한다.
double area(double r) {
	return r = M_PI * pow(r, 2);
}

void main() {
	char c;
	double i, r, result;

	//for문을 활용하여 3회 실시한다.
	for (i = 0; i < 3; i++) {
		printf("반지름을 입력하시오 : ");

	retyping:
		scanf_s("%lf", &r);
		while ((c = getchar()) != '\n' && c != EOF);

		if (r < 0) {
			printf("양수만 입력하시오 : ");
			goto retyping;
		}
		else {
			result = area(r);
			printf("원의 넓이 : %lf\n\n", result);
		}
	}
	//함수 종료 후 CMD가 바로 꺼지지 않게 pause 한다.
	system("pause");
}