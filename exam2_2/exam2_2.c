/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
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

	printf("a, b, c ���� �Է��ϼ��� ==> ");
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

	printf("�簢���� ���� ���̸� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("\n�簢���� ���� ���̸� �Է��ϼ��� ==> ");
	scanf("%d", &b);

	result = a * b;
	printf("\n�簢���� ������ %d �Դϴ�.", result);
}