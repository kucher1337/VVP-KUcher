#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
float c;
	setlocale(LC_ALL, "Rus");
	printf_s("Значение переменной в градусах: ");
	scanf_s("%lf", &c);
	c = c * 2;
	printf_s("%lf\n", c);
	system("pause");
	return 0;
}
