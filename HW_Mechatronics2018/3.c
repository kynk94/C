/*두 값의 합을 출력하는 함수를 정의하시오
code guide
A. 입력을 받을 입력변수 2 개와 결과를 저장할 출력 변수 1 개를 선언할 것
B. C all by value 방식과 Call by reference 방식 의 함수를 각각 정의할 것
- hint -
각각 함수의 반환형과 매개변수 개수를 다르게 정의*/
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

	printf("2개의 값을 입력하시오 : ");
	scanf_s("%lf %lf", &a, &b);
	while ((c = getchar()) != '\n' && c != EOF);
	
	printf("어떻게 연산하시겠습니까?\n1.Call by Value\n2.Call by Reference\nType 1 or 2\n");
	
retyping:
	scanf_s("%lf", &d);
	while ((c = getchar()) != '\n' && c != EOF);
	
	if (d == 1)	result = call_by_value(a, b);
	else if (d == 2) call_by_reference(&a, &b, &result);
	//이상한 값을 받았을 경우 재입력 요구
	else {
		printf("다시 입력해 주십시오.\nType 1 or 2\n");
		goto retyping;
	}
	
	printf("%lf + %lf = %lf\n", a, b, result);
	system("pause");
}