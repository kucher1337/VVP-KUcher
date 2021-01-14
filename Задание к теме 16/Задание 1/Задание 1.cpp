#include <stdio.h>
#include <locale.h>
int main()
{
	int x, y, mass[10];
	setlocale(LC_ALL, "Rus");
	printf("x:");
	scanf_s("%d", &x);

	mass[1] = 1;
	for (y = 2; y <= x; y++) {
		mass[y] = mass[y - 1] + 2;
	}

	for (y = 2; y <= x; y++) {
		printf_s("%d", mass[y]);
	}
	return 0;
}