#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//int a, b;
	//char ch;

	/*
	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d", &a);
	printf("계산할 연산자를 입력하세요 : ");
	scanf(" %c", &ch); //scanf_s(" %c", &ch, 1);
	printf("두 번째 수를 입력하세요 : ");
	scanf("%d", &b);

	if (ch == '+') {
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
	}
	else if (ch == '-') {
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
	}
	else if (ch == '*') {
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
	}
	else if (ch == '/') {
		printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);
	}
	else if (ch == '%') {
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
	}
	else {
		printf("연산자를 잘못 입력했습니다. \n");
	}*/

	
	/*printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &ch, &b); //scnaf_s("%d %c %d", &a, &ch, 1, &b);

	switch (ch) {
	case '+':
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
	case '-':
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
		break;
	case '/':
		printf("%d + %d = %d 입니다. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
		break;
	default:
		printf("연산자를 잘못 입력했습니다. \n");
	}*/

	/*int i;
	
 	for(i = 0; i < 3; i++) {
	    printf("안녕하세요?\n");
            printf("##또 안녕하세요?## \n");
	}

	printf("\n\n");

	for (i = 0; i < 3; i++)
	    printf("안녕하세요?\n");
	    printf("##또 안녕하세요?## \n");
	*/

		/*int hap = 0;
	int i;
	for (i = 501; i <= 1000; i += 2) {
		hap = hap + i;
	}

	printf("500에서 1000까지의 홀수의 합: %d \n", hap);
	*/

	/*int hap = 0;
	for (i = 3; i <= 100; i += 3) {
		hap += i;
	}
	printf("1에서 100까지의 3의 배수의 합: %d", hap);
	*/

	/*int num1, num2, num3;

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	for (i = num1; i <= num2; i += num3) {
		hap = hap + i;
	}
	printf("%d에서 %d까지 %d씩 증가한 값의 합: %d \n", num1, num2, num3, hap);
	*/

		/*for (int i = 2; i <= 9; i++) {
		printf("## 제 %d단 ##\n", i);
		for (int ii = 1; ii <= 9; ii++) {
			printf("%d X %d = %d\n", i, ii, i * ii);
		}
	}*/

	/*int i, k;
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 2; k++) {
			printf("중첩 for문입니다.(i값: %d, k값: %d)\n", i, k);
		}
	}*/

		int menu, option;

	printf("\nWelcome to the MJC Vending Machine\n");
	printf("----------------------------\n");
	printf("메뉴 1. 커피(Hot)\n");
	printf("메뉴 2. 차(Cold)\n");
	printf("메뉴 3. 기타음료\n");
	printf("----------------------------\n");

	printf("Select an menu(Press Ctrl-C to Exit): ");
	scanf("%d", &menu);

	if (menu == 1) {
		printf("메뉴 1. 커피(Hot)\n");
		printf("(1) 아메리카노, (2) 연한 아메리카노, (3) 카페라떼, (4) 카푸치노 \n\n");
		printf("선택해 주세요: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("아메리카노 나왔습니다.\n");
			break;
		case 2:
			printf("연한 아메리카노 나왔습니다.\n");
			break;
		case 3:
			printf("카페라떼 나왔습니다.\n");
			break;
		case 4:
			printf("카푸치노 나왔습니다.\n");
			break;
		default:
			printf("다시 선택해주세요\n");
		}
	} else if (menu == 2) {
		printf("메뉴 2. 차(Cold)\n");
		printf("(1) 아이스 아메리카노, (2) 체리 아이스티, (3) 복숭아 아이스티, (4) 레몬 아이스티 \n\n");
		printf("선택해 주세요: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("아이스 아메리카노 나왔습니다.\n");
			break;
		case 2:
			printf("체리 아이스티 나왔습니다.\n");
			break;
		case 3:
			printf("복숭아 아이스티 나왔습니다.\n");
			break;
		case 4:
			printf("레몬 아이스티 나왔습니다.\n");
			break;
		default:
			printf("다시 선택해주세요\n");
		}
	} else if (menu == 3) {
		printf("메뉴 3. 기타음료\n");
		printf("(1) 핫초코, (2) 초코밀크, (3) 모카치노, (4) 녹차라떼 \n\n");

		printf("선택해 주세요: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("핫초코 나왔습니다.\n");
			break;
		case 2:
			printf("초코밀크 나왔습니다.\n");
			break;
		case 3:
			printf("모카치노 나왔습니다.\n");
			break;
		case 4:
			printf("녹차라떼 나왔습니다.\n");
			break;
		default:
			printf("다시 선택해주세요\n");
		}
	} else {
		printf("다시 선택해 주세요\n");
	}
}
