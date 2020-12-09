#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y, z;
	setlocale(LC_ALL, "Rus");
	printf("Значение x:");
	scanf_s("%d", &x);
	printf("Значение y:");
	scanf_s("%d", &y);
	printf("Значение z:");
	scanf_s("%d", &z);
	if ((x <= y) && (x <= z)) {
		printf_s("Сумма 2-ух наибольших цичел: %d", y + z);
	}
	else if ((y <= x) && (y <= z)) {
		printf_s("Сумма 2-ух наибольших цичел: %d", x + z);
	}
	else if ((z <= x) && (z <= y)) {
		printf_s("Сумма 2-ух наибольших цичел: %d", x + y);
	}

	return 0;
}
