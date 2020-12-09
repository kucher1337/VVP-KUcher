#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int a;
	setlocale(LC_ALL, "Rus");
	printf("Значение a:");
	scanf_s("%d", &a);

	if (a == 0) {
		printf("Значение нулевое");
	}
	else if ((a > 0) && (a % 2 == 0)) {
		printf("Положительное и четное ");
	}
	else if ((a > 0) && (a % 2 != 0)) {
		printf("Положительное и нечетное");
	}
	else if ((a < 0) && (a % 2 != 0)) {
		printf("Отрицательное и нечетное");
	}
	else if ((a < 0) && (a % 2 == 0)) {
		printf("Отрицательное и четное");
	}

	return 0;
}
