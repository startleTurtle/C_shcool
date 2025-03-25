/*#include <stdio.h>

void main() {
	printf("%d", 100, 200);
	printf("\n");
	printf("%d %d", 100);
	printf("\n");
}*/

/*#include <stdio.h>

void main() {
	printf("%d / %d = %f", 100, 200, 0.5);
	printf("\n");
}*/

/*#include <stdio.h>

void main() {
	printf("%d / %d = %f \n", 100, 200, 0.5);
	printf("%c %c \n", 'a', 'k');
	printf("%s %s \n", "안녕", "C 언어");
}*/

/*#include <stdio.h>

void main() {
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);

	printf("%f\n", 123.45);
	printf("%7.1f\n", 123.45);
	printf("%7.3f\n", 123.45);

	printf("%d / %d = %.1f\n", 100, 200, 0.5);

	printf("%s\n", "Basic-C");
	printf("%10s\n", "Basic-C");
}*/

/*#include <stdio.h>

main() {
	printf("\n줄 바꿈\n연습\n");
	printf("\t탭키\t연습\n");
	printf("이것을\r덮어씁니다\n");
	printf("\a\a\a삐소리 3번\n");
	printf("글자가 \"강조\"되는 효과\n");
	printf("\\\\\\ 역슬래시 세 개 출력\n");
}*/

/*#include <stdio.h>

void main() {
	float a = 123.45;
	int b = 200;

	printf("a의 값 ==> %.2f \n", a);
	printf("b의 값 ==> %d \n", b);
}*/

#include <stdio.h>

void main() {
	int a = 100 + 100, b = a + 100, c = a + b - 100, d = a + b + c;

	printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

	a = b = c = d = 100;
	printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

	a = 100;
	a = a + 200;
	printf("a의 값 ==> %d \n", a);
}