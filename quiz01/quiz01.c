/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float dan, ju;
	printf("�ܰ�(��) : ");
	scanf("%f", &dan);
	printf("�ֹ�����(��) : ");
	scanf("%f", &ju);
	printf("\n���(��) : %.f\n", (ju >= 1000) ? (dan * 0.8) * ju : (dan * 0.9) * ju);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int jumsu;
	printf("�ʱ�������� : ");
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
	printf("%d �� ���� 1ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a << 1);
	printf("%d �� ���� 2ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a << 2);
	printf("%d �� ���� 3ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a << 3);
}*/

/*#include <stdio.h>

int main() {
	int a = 10;
	printf("%d �� ������ 1ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a >> 1);
	printf("%d �� ������ 2ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a >> 2);
	printf("%d �� ������ 3ȸ ����Ʈ�ϸ� %d �̴�.\n", a, a >> 3);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float c, f;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%f", &c);
	printf("ȭ���� %.2f �Դϴ�.", c * 9 / 5 + 32);

	printf("\n\nȭ���� �Է��Ͻÿ� : ");
	scanf("%f", &f);
	printf("������ %.2f �Դϴ�.", (f-32) * 5 / 9);

}