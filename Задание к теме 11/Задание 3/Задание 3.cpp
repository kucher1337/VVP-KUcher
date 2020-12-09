#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double A, B, C;
	setlocale(LC_ALL, "Rus");
	printf("значение A:");
	scanf_s("%lf", &A);
	printf("значение B:");
	scanf_s("%lf", &B);
	printf("значение C:");
	scanf_s("%lf", &C);
	if ((fabs(A - B)) < fabs(A - C)) {
		printf_s("К точке А находится ближе точка В: %lf", fabs(A - B));
	}
	else {
		printf_s("К точке А находится ближе точка C: %lf", fabs(A - C));
	}

	return 0;
}

