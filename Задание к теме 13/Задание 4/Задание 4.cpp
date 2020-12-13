#include <stdio.h>
#include <locale.h>

int main()
{
	double x, z, y, k, l;
	setlocale(LC_ALL, "Rus");
	printf("k:");
	scanf_s("%lf", &k);
	printf("l:");
	scanf_s("%lf", &l);

	x = 1;
	z = 1;

	for (y = 1; y <= k; y++) {
		z = z * l;
		x = x + z;
	}
	printf_s("сумма: %lf", x);

	return 0;
}

