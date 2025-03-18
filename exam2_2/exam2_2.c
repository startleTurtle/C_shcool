/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);

	result = a + b + c;
	printf("\n%d + %d + %d = %d\n", a, b, c, result);	

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);	
	
	result = a * b * c;
	printf("%d * %d * %d = %d\n", a, b, c, result);	
	
	result = a / b;
	printf("%d / %d = %d\n", a, b, result);
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;
	int result;

	printf("a, b, c 값을 입력하세요 ==> ");
	scanf("%d %d %d", &a, &b, &c);

	result = a + b + c;
	printf("\n%d + %d + %d = %d\n", a, b, c, result);	

	result = a * b * c;
	printf("%d * %d * %d = %d\n", a, b, c, result);
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;
	int result;

	printf("사각형의 가로 길이를 입력하세요 ==> ");
	scanf("%d", &a);
	printf("\n사각형의 세로 길이를 입력하세요 ==> ");
	scanf("%d", &b);

	result = a * b;
	printf("\n사각형의 면적은 %d 입니다.", result);
}