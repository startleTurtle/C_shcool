#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

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