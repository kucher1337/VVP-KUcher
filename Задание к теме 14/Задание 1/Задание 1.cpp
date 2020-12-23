#include <stdio.h>
#include <locale.h>

int main()
{
	double x, y, z, k, B, A;
	setlocale(LC_ALL, "Rus");
	printf("A:");
	scanf_s("%lf", &A);
	printf("B:");
	scanf_s("%lf", &B);

	if (A < B) {
		for (z = 1; z <= A; z++) {
			k = A;
			printf_s("Реузльтат: %lf", k);
		}
		for (x = B; x >= 1; x--) {
		y= B;
			printf_s("Результат: %lf", y);
		}

	}
	else
		printf_s("Неверно");

	return 0;
}
