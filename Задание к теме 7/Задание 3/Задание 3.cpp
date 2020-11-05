#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	float Y, A, X, l, R;
	setlocale(LC_ALL, "Rus");
	printf_s("A-кол-во конфет в кг: ");
	scanf_s("%f", &A);
	printf_s("X-цена в руб за A кг:");
	scanf_s("%f", &X);
	l = X / A;
	printf_s("Y кг: ");
	scanf_s("%f", &Y);
	R = Y * l;
	printf_s("%lf\n", R);
	system("pause");
	return 0;
}
