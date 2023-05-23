#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main() {

	char ch;
	scanf("%c", &ch);

	char st[100];
	scanf("\n");
	int len;
	fflush(stdin);
	gets_s(st);
	scanf(" %s\n", st);
	len = strlen(st);

	int a, b;
	scanf("%d %d", &a, &b);

	float x, y;
	scanf("%f %f", &x, &y);

	int k;
	scanf("%u", &k);

	printf("%c, %d\n", ch, ch);
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

	getchar();
	getchar();
	return 0;
}