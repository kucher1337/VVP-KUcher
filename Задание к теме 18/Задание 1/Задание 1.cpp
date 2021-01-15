#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c, mass[100], mass2[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &a);
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass2[%d] = ", b);
		scanf_s("%d", &mass2[b]);
	}
	for (b = 1; b <= a; b++) {
		mass[b] = mass[b] + mass2[b];
		mass2[b] = mass[b] - mass2[b];
		mass[b] = mass[b] - mass2[b];
	}
	for (b = 1; b <= a; b++) {
		printf("Первый массив :%d", mass[b]);
	}
	for (b = 1; b <= a; b++) {
		printf("Второй массив :%d", mass2[b]);
	}
	return 0;
}

