#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

void main() {
	/*int i;
	i = 0;
		for(; ; ) {
			printf("%d \n", i);
				i++;
		}*/


	/*int a, b;
	for (; ; ) {
		printf("더할 두 수 입력 (멈추려면 Ctrl + C) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);
	}*/

	/*int i, sum = 1;

	printf("반복문을 이요하지 않고 : \n");
	printf("1 에서 10까지의 곱은 %d 입니다.\n", 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10);
	
	printf("for 반복문을 이용: \n");
	for (i = 1; i <= 10; i++) {
		sum *= i;
	}
	
	printf("1 에서 10까지의 곱은 %d 입니다.\n", sum);

	printf("while 반복문을 이용: \n");
	i = 1, sum = 1;
	while (i <= 10) {
		sum *= i;
		i++;
	}
	
	printf("1 에서 10까지의 곱은 %d 입니다.\n", sum);*/

	/*int i, sum = 0;

	printf("반복문을 이용하지 않고 : \n");
	printf("20 에서 25까지의 합은 %d 입니다.\n", 20  + 21 + 22 + 23 + 24 + 25);

	printf("for 반복문을 이용: \n");
	for (i = 20; i <= 25; i++) {
		sum += i;
	}

	printf("20 에서 25까지의 합은 %d 입니다.\n", sum);

	printf("while 반복문을 이용: \n");
	i = 20, sum = 0;
	while (i <= 25) {
		sum += i;
		i++;
	}

	printf("20 에서 25까지의 합은 %d 입니다.\n", sum);
	*/

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
	}
	else if (menu == 2) {
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
	}
	else if (menu == 3) {
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
	}
	else {
		printf("다시 선택해 주세요\n");
	}
	
}

