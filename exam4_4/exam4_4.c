/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;
	int b;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &a);
	printf("ASCII CODE���� %d�Դϴ�.\n\n", a);

	printf("ASCII CODE���� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("���ڴ� %c �Դϴ�.", b);
}*/

//#include <stdio.h>
//
//int main() {
//	int a = 10;
//
//	a++;
//	printf("a++ ==> %d\n", a);
//	
//	a--;
//	printf("a-- ==> %d\n", a);
//	
//	a += 5;
//	printf("a += 5 ==> %d\n", a);
//	
//	a -= 5;
//	printf("a -= 5 ==> %d\n", a);
//	
//	a *= 5;
//	printf("a *= 5 ==> %d\n", a);
//	
//	a /= 5;
//	printf("a /= 5 ==> %d\n", a);
//	
//	a %= 5;
//	printf("a %%= 5 ==> %d\n", a);
//}

//#include <stdio.h>
//
//int main() {
//	int a = 10, b;
//
//	b = a++;
//	printf("%d\n", b);
//
//	b = ++a;
//	printf("%d\n", b);
//}

#include <stdio.h>

int main() {
	int a = 10, b = 20, c = 30;

	// ���� ���� ����� �������� ������ �����?
	printf("a = %d, b = %d, c = %d\n", a, b, c); // 10 20 30
	printf("a + b++�� ��� = %5d\n\n", a + b++); // 30

	printf("a = %d, b = %d, c = %d\n", a, b, c); // 10 21 30
	printf("a + ++b %% 3�� ��� = %5d\n\n", a + ++b % 3); // 11

	printf("a = %d, b = %d, c = %d\n", a, b, c); // 10 22 30
	printf("++a / 2 + c++�� ��� = %5d\n\n", ++a /2 + c++); // 35

	printf("a = %d, b = %d, c = %d\n", a, b, c); // 11 22 31
	printf("a++ + ++b + ++c�� ��� = %5d\n\n", a++ + ++b + ++c); // 66 
	printf("a = %d, b = %d, c = %d\n", a, b, c); // 12 23 32
}