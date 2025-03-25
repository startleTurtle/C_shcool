#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  main() {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %.1f\n", a, b, (float)a / b);
}