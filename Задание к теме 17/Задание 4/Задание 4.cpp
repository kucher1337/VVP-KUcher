﻿#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &a);
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	c = 0;
	for (b = 1; b <= a; b++) {
		if (b == 1) {
			if (mass[1] > mass[2]) {
				c = 1;
			}
		}
		else if (b == a) {
			if (mass[a] > mass[a - 1]) {
				c = a;
			}
		}
		else if ((mass[b] > mass[b - 1]) && (mass[b] > mass[b + 1])) {
			c = b;
		}
	}
	if (c > 0) {
		printf_s("последнего локальный максимум: %d", c);
	}
	else
		printf_s("Максимума нет");
	return 0;
}
