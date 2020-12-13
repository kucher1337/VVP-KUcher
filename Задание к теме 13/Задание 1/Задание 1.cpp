#include <stdio.h>
#include <locale.h>

int main()
{
	double A, B;
	setlocale(LC_ALL, "Rus");
	printf("Цена за 1 кг:");
	scanf_s("%lf", &A);

	for (B = 0; B < 10; B++) {
		printf_s("Cтоимость конфет: %lf\n", B / (10 * A));

	}

	return 0;
}