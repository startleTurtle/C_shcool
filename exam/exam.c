#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int aa[3][4];
	int i, k;

	int val = 1;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			aa[i][k] = val;
			val++;
		}
	}

	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}

	int aa[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int i, k;

	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}

	int score[2][3] = {
		{70, 75, 0},
		{80, 85, 0}
	};

	int i, k;
	for (i = 0; i < 2; i++) {
		for (k = 0; k < 2; k++) {
			score[i][2] += score[i][k];
		}
	}

	printf("C_LANG\tInfo\t합계\n");
	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d\t", score[i][k]);
		}
		printf("\n");
	}

	int score[2][3] = { 0 }, i, k;

	printf("C_LANG, Info 점수를 입력하세요\n");
	for (i = 0; i < 2; i++) {
		for (k = 0; k < 2; k++) {
			scanf("%d", &score[i][k]);
			score[i][2] += score[i][k];
		}
	}

	printf("C_LANG\tInfo\t합계\n");
	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d\t", score[i][k]);
		}
		printf("\n");
	}

	int score[3][5] = {
		{75, 75, 85, 90},
		{90, 89, 87, 95},
		{70, 68, 79, 80}
	};

	int i, k;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			score[i][4] += score[i][k];
		}
	}

	printf("C언어\tInfo\tJava\tNetwork\t합계\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 5; k++) {
			printf("%d\t", score[i][k]);
		}
		printf("\n");
	}
	*/
	int score[3][5] = { 0 }, i, k;

	printf("C언어, Info, Java, Network 점수를 입력하세요\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			scanf("%d", &score[i][k]);
			score[i][4] += score[i][k];
		}
	}

	printf("C언어\tInfo\tJava\tNetwork\t합계\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 5; k++) {
			printf("%d\t", score[i][k]);
		}
		printf("\n");
	}
}