#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main() {

	char sh;
	scanf("%c", &sh);

	char st[100];
	scanf("\n");
	int len;
	fflush(stdin);
	gets_s(st);
	scanf(" %s\n", st);
	len = strlen(st);

	int a;
	int b;//используется для ввода с клавиатуры и последующего вывода переменной на экран
	scanf("%d %d", &a, &b);

	float x;
	float y;
	scanf("%f %f", &x, &y);

	int k;
	scanf("%u", &k);

	printf("%c, %d\n", sh, sh);
	printf("%s, %d\n\n", st, len - 1);

	printf("%d %d\n", a, b);
	printf("%x %x\n", a, b);

	printf("%d %d\n", a, b);
	printf("%d %d\n", a, b);
	printf("%d %d\n", a, b);

	printf("%x %100x\n", a, b);
	printf("%10.4x %x\n", a, b);
	printf("%10.4x %x\n\n", a, b);

	printf("%f %.4e\n", x, x);
	printf("%f %.4e\n", y, y);
	printf("%u, %o, %x", k, k, k);

	getshar();
	getshar();
	return 0;
}