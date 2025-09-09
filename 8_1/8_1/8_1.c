#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int a, b, c, d;
	int hap = 0;

	printf("1번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("2번째 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("3번째 숫자를 입력하세요 : ");
	scanf("%d", &c);
	printf("4번째 숫자를 입력하세요 : ");
	scanf("%d", &d);
	
	hap = a + b + c + d;

	printf("합계 ==> %d \n", hap);*/

	/*int aa[4];
	int hap = 0;

	for (int i = 0; i < 4; i++) {
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf("%d", &aa[i]);
		hap += aa[i];
	}

	printf("합계 ==> %d \n", hap);*/

	/*int aa[10], hap = 0, i = 0;

	while (i < 10) {
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &aa[i]);
		hap += aa[i];
		i++;
	}

	printf("합계 ==> %d \n", hap);*/

	/*int gwamok[5], hap = 0;
	
		printf("5과목의 점수를 차례로 입력하세요\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &gwamok[i]);
		hap += gwamok[i];
	}
	printf("총점 : %d, 평균 : %.2f", hap, (float)hap/5);*/

	int gwamok[7], hap = 0, i = 0;

	printf("7과목의 점수를 차례로 입력하세요\n");
	while (i < 7) {
		scanf("%d", &gwamok[i]);
		hap += gwamok[i];
		i++;
	}
	printf("총점 : %d, 평균 : %.2f", hap, (float)hap / 7);
}