﻿#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c;
	double mass[100], mass2[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &a);
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%lf", &mass[b]);
	}
	for (b = 1; b <= a; b++) {
		mass2[b] = 0;
	}
	for (b = 1; b <= a; b++) {
		for (c = b; c <= a; c++) {
			mass2[b] = mass2[b] + mass[c];
		}
	}
	for (b = 1; b <= a; b++) {
		printf("Второй массив :%lf", mass2[b]);
	}
	return 0;
}

