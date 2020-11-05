#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	double a;
	setlocale(LC_ALL, "Rus");
	printf_s("Значение переменной в градусах:");
	scanf_s("%lf", &a);
	a = (a * 3.14) / 180;
	printf_s("%lf\n", a);
	system("pause");
	return 0;
}
