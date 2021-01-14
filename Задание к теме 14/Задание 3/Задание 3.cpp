#include <stdio.h>
#include <locale.h>

int main()
{
	double  N, K, x;
	setlocale(LC_ALL, "Rus");
	printf("N:");
	scanf_s("%lf", &N);
	K = 0;
	x = 0;
	while (x < N) {
		K = K + 1;
		x = K + x;
	}
	printf_s("Число: %lf", K);
	printf_s("Сумма: %lf", x);
	return 0;
}
