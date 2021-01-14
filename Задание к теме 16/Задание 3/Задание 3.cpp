#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c, x, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &c);
	printf("a :");
	scanf_s("%d", &a);
	printf("b :");
	scanf_s("%d", &b);
	mass[1] = a;
	mass[2] = b;
	mass[3] = a + b;
	for (x = 4; x <= c; x++) {
		mass[x] = mass[x - 1] * 2;
	}
	for (x = 1; x <= c; x++) {
		printf_s("% i", mass[x]);
	}
	return 0;
}
