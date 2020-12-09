#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y;
	setlocale(LC_ALL, "Rus");
	printf("Значение x:");
	scanf_s("%d", &x);
	printf("Значение y:");
	scanf_s("%d", &y);
	if ((x > 2) && (y <= 3)) {
		printf_s("Выражение справедливо");
	}
	else {
		printf_s("Выражение несправедливо");
	}

	return 0;
}
