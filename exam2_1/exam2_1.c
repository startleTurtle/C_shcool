#include <stdio.h>

void main() {
	int a, b;
	int result;

	a = 100;
	b = 50;

	printf("다음의 계산기 프로그램을 하시오\n\n");

	result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);
}