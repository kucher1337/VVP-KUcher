#include <stdio.h>
#include <locale.h>

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


	if ((x < (y + z)) & (y < (x + z)) & (z < (x + y))) {
		printf_s("Треугольник существует");
	}
	else {
		printf_s("Трегольник не существует");
	}

	return 0;
}