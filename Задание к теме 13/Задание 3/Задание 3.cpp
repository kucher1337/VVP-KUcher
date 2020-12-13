#include <stdio.h>
#include <locale.h>

int main()
{
	double A, B, N;
	setlocale(LC_ALL, "Rus");
	printf("N:");
	scanf_s("%lf", &N);

	A = 0;
	for (B = 1; B <= N; B++) {
		A = A + (2 * B - 1);
	}
	printf_s("Квадрат равен: %lf", A);

	return 0;
}
