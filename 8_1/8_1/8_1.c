#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int a, b, c, d;
	int hap = 0;

	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &c);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &d);
	
	hap = a + b + c + d;

	printf("�հ� ==> %d \n", hap);*/

	/*int aa[4];
	int hap = 0;

	for (int i = 0; i < 4; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
		scanf("%d", &aa[i]);
		hap += aa[i];
	}

	printf("�հ� ==> %d \n", hap);*/

	/*int aa[10], hap = 0, i = 0;

	while (i < 10) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf("%d", &aa[i]);
		hap += aa[i];
		i++;
	}

	printf("�հ� ==> %d \n", hap);*/

	/*int gwamok[5], hap = 0;
	
		printf("5������ ������ ���ʷ� �Է��ϼ���\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &gwamok[i]);
		hap += gwamok[i];
	}
	printf("���� : %d, ��� : %.2f", hap, (float)hap/5);*/

	int gwamok[7], hap = 0, i = 0;

	printf("7������ ������ ���ʷ� �Է��ϼ���\n");
	while (i < 7) {
		scanf("%d", &gwamok[i]);
		hap += gwamok[i];
		i++;
	}
	printf("���� : %d, ��� : %.2f", hap, (float)hap / 7);
}