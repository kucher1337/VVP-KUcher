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
	if ((x < y) && (y < z)) {
		printf_s("Выражение справедливо");
	}
	else {
		printf_s("Выражение несправедливо");
	}

	return 0;
}
