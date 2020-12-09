#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int x, y, z;
	setlocale(LC_ALL, "Rus");
	printf("Первая сторона :");
	scanf_s("%d", &x);
	printf("Вторая сторона:");
	scanf_s("%d", &y);
	printf("Третья сторона :");
	scanf_s("%d", &z);


	if ((pow(x, 2) == (pow(y, 2) + pow(z, 2))) | (pow(y, 2) == (pow(x, 2) + pow(z, 2))) | (pow(z, 2) == (pow(x, 2) + pow(y, 2)))) {
		printf_s("Треугольник прямоугольнный ");
	}
	else {
		printf_s("Треугольник не прямоугольнный");
	}

	return 0;
}
