#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
float v1, v2, s, t, S;
	setlocale(LC_ALL, "Rus");
	printf_s("Скорость первого авто v1:");
	scanf_s("%f", &v1);
	printf_s("Скорость второго авто v2:");
	scanf_s("%f", &v2);
	printf_s("Расстояние между авто s:");
	scanf_s("%f", &s);
	printf_s("Время t:");
	scanf_s("%f", &t);
	S = s + v1 * t + v2 * t;
	printf_s("%lf\n", S);
	system("pause");
	return 0;
}
