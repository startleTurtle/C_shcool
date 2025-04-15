/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float dan, ju;
	printf("단가(원) : ");
	scanf("%f", &dan);
	printf("주문수량(개) : ");
	scanf("%f", &ju);
	printf("\n대금(원) : %.f\n", (ju >= 1000) ? (dan * 0.8) * ju : (dan * 0.9) * ju);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int jumsu;
	printf("필기시험점수 : ");
	scanf("%d", &jumsu);

	printf("%c", (jumsu >= 70) ? 'P' : 'F');
}*/

/*#include <stdio.h>

int main() {
	char a = 'A', b;
	char mask = 0x0F;

	printf(" %X & %X = %X\n", a, mask, a & mask);
	printf(" %X | %X = %X\n", a, mask, a | mask);

	mask = 'a' - 'A';
	printf(" mask = %x\n", mask);

	b = a^ mask;
	printf(" %c ^ %d = %c\n", a, mask, b);
	printf(" b = %X\n", b);

	a = b ^ mask;
	printf(" %c ^ %d = %c\n", b, mask, a);
	printf(" a= %X", a);
	
}*/

/*#include <stdio.h>

int main() {
	int a = 10;
	printf("%d 를 왼쪽 1회 시프트하면 %d 이다.\n", a, a << 1);
	printf("%d 를 왼쪽 2회 시프트하면 %d 이다.\n", a, a << 2);
	printf("%d 를 왼쪽 3회 시프트하면 %d 이다.\n", a, a << 3);
}*/

/*#include <stdio.h>

int main() {
	int a = 10;
	printf("%d 를 오른쪽 1회 시프트하면 %d 이다.\n", a, a >> 1);
	printf("%d 를 오른쪽 2회 시프트하면 %d 이다.\n", a, a >> 2);
	printf("%d 를 오른쪽 3회 시프트하면 %d 이다.\n", a, a >> 3);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float c, f;
	printf("섭씨를 입력하시오 : ");
	scanf("%f", &c);
	printf("화씨는 %.2f 입니다.", c * 9 / 5 + 32);

	printf("\n\n화씨를 입력하시오 : ");
	scanf("%f", &f);
	printf("섭씨는 %.2f 입니다.", (f-32) * 5 / 9);

}