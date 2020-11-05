#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	float A1, A2, B1, B2, C1, C2, x, y, z;
	printf_s("A1:");
	scanf_s("%f", &A1);
	printf_s("A2:");
	scanf_s("%f", &A2);
	printf_s("B1:");
	scanf_s("%f", &B1);
	printf_s("B2:");
	scanf_s("%f", &B2);
	printf_s("C1:");
	scanf_s("%f", &C1);
	printf_s("C2:");
	scanf_s("%f", &C2);
	z = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1);
	y = (A1 * C2 - A2 * C1);
	printf_s("%lf\n",x);
	printf_s("%lf\n", y);
	system("pause");
	return 0;
}
