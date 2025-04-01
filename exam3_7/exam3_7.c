/*#include <stdio.h>
void main() {
	int a = 100, b = 200;
	float result;

	result = (float)a / b;

	printf("%.1f \n", result);
	
}
#include <stdio.h>
void main() {
	float a = 0.1234567980123456789012345f;
	double b = 0.1234567890123456789012345;

	printf("%30.25f \n", a);
	printf("%30.25lf \n", b);
}
#include <stdio.h>
void main() {
	char a, b, c;

	a = 'A';

	printf("%c \n", a);
	printf("%d \n", a);

	b = 'a';
	c = b + 5;
	printf("%c \n", b);
	printf("%c \n", c);

	c = 90;
	printf("%c \n", c);

}
#include <stdio.h>
void main() {
	int a, b;
	char c, d;

	a = 0x41;
	b = 0x50;

	printf("%c \n", b);

	c = a;
	printf("%c \n", c);

	d = '#';
	printf("%c의 ASCII 값은 %d 입니다. \n", d, d);
}
#include <stdio.h>
void main() {
	int a, b = 5, c = 3;

	a = b + c;
	printf("%d + %d = %d \n", b, c, a);

	a = b - c;
	printf("%d - %d = %d \n", b, c, a);

	a = b * c;
	printf("%d * %d = %d \n", b, c, a);

	a = b / c;
	printf("%d / %d = %d \n", b, c, a);

	a = b % c;
	printf("%d %% %d = %d \n", b, c, a);
}*/
#include <stdio.h>
void main() {
	int a = 2, b = 3, c = 4;
	int result1, mok, namugi;
	float result2;

	result1 = a + b - c;
	printf("%d + %d - %d = %d \n", a, b, c, result1);

	result1 = a + b * c;
	printf("%d + %d * %d = %d \n", a, b, c, result1);

	result2 = a * b / (float)c;
	printf("%d * %d / %d = %f \n", a, b, c, result2);

	mok = c / b;
	printf("%d / %d의 몫은 %d \n", c, b, mok);

	namugi = c % b;
	printf("%d %% %d의 나머지는 %d \n", c, b, namugi);
}