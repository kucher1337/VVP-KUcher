#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c, d, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &a);
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	a = a / 2;
	c = mass[2];
	d = 2;
	for (b = 2; b <= a; b++) {
		if (mass[2 * b] < c) {
			c = mass[2 * b];
			d = 2 * b;
		}
	}
	printf_s("Мин. четный элемент: %d", c);
	return 0;
}