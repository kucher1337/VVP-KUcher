#include <stdio.h>
#include <locale.h>
#include <xmemory>
int Sign(double X)
{
	if (X < 0) {
		return -1;
	}
	if (X == 0) {
		return 0;
	}
	if (X > 0) {
		return 1;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	printf("Число 1 :");
	scanf_s("%lf", &A);
	printf("Число 2 :");
	scanf_s("%lf", &B);
	printf_s("Получается: %d", (Sign(A) + Sign(B)));
	return 0;
}
