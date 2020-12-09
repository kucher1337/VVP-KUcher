#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int a;
	setlocale(LC_ALL, "Rus");
	printf("Значение a:");
	scanf_s("%d", &a);

	if ((a > 0) && (a < 10) && (a % 2 != 0)) {
		printf("однозначное и нечетное ");
	}
	else if ((a > 0) && (a < 10) && (a % 2 == 0)) {
		printf("однозначное и четное ");
	}
	else if ((a > 9) && (a < 100) && (a % 2 != 0)) {
		printf("двузначное и нечетное");
	}
	else if ((a > 9) && (a < 100) && (a % 2 == 0)) {
		printf("двузначное и четное");
	}
	else if ((a < 1000) && (a > 99) && (a % 2 != 0)) {
		printf("трехзначное и нечетное");
	}
	else if ((a < 1000) && (a > 99) && (a % 2 == 0)) {
		printf("трехзначное и четное");
	}

	return 0;
}
