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
		printf("���� �� �� �Է� (���߷��� Ctrl + C) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);
	}*/

	/*int i, sum = 1;

	printf("�ݺ����� �̿����� �ʰ� : \n");
	printf("1 ���� 10������ ���� %d �Դϴ�.\n", 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10);
	
	printf("for �ݺ����� �̿�: \n");
	for (i = 1; i <= 10; i++) {
		sum *= i;
	}
	
	printf("1 ���� 10������ ���� %d �Դϴ�.\n", sum);

	printf("while �ݺ����� �̿�: \n");
	i = 1, sum = 1;
	while (i <= 10) {
		sum *= i;
		i++;
	}
	
	printf("1 ���� 10������ ���� %d �Դϴ�.\n", sum);*/

	/*int i, sum = 0;

	printf("�ݺ����� �̿����� �ʰ� : \n");
	printf("20 ���� 25������ ���� %d �Դϴ�.\n", 20  + 21 + 22 + 23 + 24 + 25);

	printf("for �ݺ����� �̿�: \n");
	for (i = 20; i <= 25; i++) {
		sum += i;
	}

	printf("20 ���� 25������ ���� %d �Դϴ�.\n", sum);

	printf("while �ݺ����� �̿�: \n");
	i = 20, sum = 0;
	while (i <= 25) {
		sum += i;
		i++;
	}

	printf("20 ���� 25������ ���� %d �Դϴ�.\n", sum);
	*/

	int menu, option;

	printf("\nWelcome to the MJC Vending Machine\n");
	printf("----------------------------\n");
	printf("�޴� 1. Ŀ��(Hot)\n");
	printf("�޴� 2. ��(Cold)\n");
	printf("�޴� 3. ��Ÿ����\n");
	printf("----------------------------\n");

	printf("Select an menu(Press Ctrl-C to Exit): ");
	scanf("%d", &menu);

	if (menu == 1) {
		printf("�޴� 1. Ŀ��(Hot)\n");
		printf("(1) �Ƹ޸�ī��, (2) ���� �Ƹ޸�ī��, (3) ī���, (4) īǪġ�� \n\n");
		printf("������ �ּ���: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("�Ƹ޸�ī�� ���Խ��ϴ�.\n");
			break;
		case 2:
			printf("���� �Ƹ޸�ī�� ���Խ��ϴ�.\n");
			break;
		case 3:
			printf("ī��� ���Խ��ϴ�.\n");
			break;
		case 4:
			printf("īǪġ�� ���Խ��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �������ּ���\n");
		}
	}
	else if (menu == 2) {
		printf("�޴� 2. ��(Cold)\n");
		printf("(1) ���̽� �Ƹ޸�ī��, (2) ü�� ���̽�Ƽ, (3) ������ ���̽�Ƽ, (4) ���� ���̽�Ƽ \n\n");
		printf("������ �ּ���: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("���̽� �Ƹ޸�ī�� ���Խ��ϴ�.\n");
			break;
		case 2:
			printf("ü�� ���̽�Ƽ ���Խ��ϴ�.\n");
			break;
		case 3:
			printf("������ ���̽�Ƽ ���Խ��ϴ�.\n");
			break;
		case 4:
			printf("���� ���̽�Ƽ ���Խ��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �������ּ���\n");
		}
	}
	else if (menu == 3) {
		printf("�޴� 3. ��Ÿ����\n");
		printf("(1) ������, (2) ���ڹ�ũ, (3) ��īġ��, (4) ������ \n\n");

		printf("������ �ּ���: ");
		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("������ ���Խ��ϴ�.\n");
			break;
		case 2:
			printf("���ڹ�ũ ���Խ��ϴ�.\n");
			break;
		case 3:
			printf("��īġ�� ���Խ��ϴ�.\n");
			break;
		case 4:
			printf("������ ���Խ��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �������ּ���\n");
		}
	}
	else {
		printf("�ٽ� ������ �ּ���\n");
	}
	
}

