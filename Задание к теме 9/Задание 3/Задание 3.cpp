#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	int A, d, x;
	setlocale(LC_ALL, "Rus");
	printf("День в году:");
	scanf_s("%d", &x);
	printf("номер дня 1 января:");
	scanf_s("%d", &d);
	A = (((x - 1) + (d - 1)) % 7) + 1;
	printf("день недели: %d\n", A);
	return 0;
}