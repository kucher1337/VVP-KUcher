#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double x, y;
	setlocale(LC_ALL, "Rus");
	printf("Значение x:");
	scanf_s("%lf", &x);
	printf("Значение y:");
	scanf_s("%lf", &y);

	if ((x > 0) && (y > 0)) {
		printf_s("1 координатная четверть");
	}
	else if ((x < 0) && (y > 0)) {
		printf_s("2 координатная четверть");
	}
	else if ((x < 0) && (y < 0)) {
		printf_s("3 координатная четверть");
	}
	else if ((x > 0) && (y < 0)) {
		printf_s("4 координатная четверть");
	}

	return 0;
}
