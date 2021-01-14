#include <iostream>
#include <clocale>
void Quarter(int x, int y)
{
	if ((x > 0) && (y > 0)) {
		printf("В 1 К. плоскотси ");
	}
	else if ((x < 0) && (y > 0)) {
		printf("В 2 К. плоскотси ");
	}
	else if ((x < 0) && (y < 0)) {
		printf("В 3 К. плоскотси ");
	}
	else if ((x > 0) && (y < 0)) {
		printf("В 4 К. плоскотси ");
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	for (z = 0; z <= 3; z++)
	{
		printf("Переменная 1 ");
		scanf_s("%d", &x);
		printf("Переменная 2");
		scanf_s("%d", &y);
		if ((x != 0) && (y != 0)) {
			Quarter(x, y);
		}
		else {
			printf_s("Неверно");
		}
	}
	return 0;
}

