#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
float v, e, s, t, S;
	setlocale(LC_ALL, "Rus");
	printf_s("Скорость первого авто v:");
	scanf_s("%f", &v);
	printf_s("Скорость второго авто e:");
	scanf_s("%f", &e);
	printf_s("Расстояние между авто s:");
	scanf_s("%f", &s);
	printf_s("Время t:");
	scanf_s("%f", &t);
	S = s + v * t + e * t;
	printf_s("%lf\n", S);
	system("pause");
	return 0;
}
