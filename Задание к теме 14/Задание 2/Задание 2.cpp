#include <stdio.h>
#include <locale.h>
int main()
{
	double  A, B;
	setlocale(LC_ALL, "Rus");
	printf("A:");
	scanf_s("%lf", &A);
	printf("B:");
	scanf_s("%lf", &B);

	while ((B - A) >= 0) {
		B = B - A;
	}

	printf_s("Незанятая часть B: %lf", B);
	return 0;
}
