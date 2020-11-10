#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	float A, B, C;
	setlocale(LC_ALL, "Rus");
	printf_s("Длина A:");
	scanf_s("%f", &A);
	printf_s("Длина B:");
	scanf_s("%f", &B);
	C = A / B;
	printf("%lf\n", C);
	system("pause");
	return 0;
}

