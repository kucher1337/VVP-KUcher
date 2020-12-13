#include <stdio.h>
#include <locale.h>

int main()
{
	double A, B, N;
	setlocale(LC_ALL, "Rus");
	printf("Введите N:");
	scanf_s("%lf", &N);

	A = 1;
	for (B = 1; B <= N; B++) {
		A = A * (1 + 0.1 * A);
	}
	printf_s("Произведение равно: %lf", A);

	return 0;
}
