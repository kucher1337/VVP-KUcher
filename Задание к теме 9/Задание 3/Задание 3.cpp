#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	int A, d;
	setlocale(LC_ALL, "Rus");
	printf("День в году:");
	scanf_s("%d", &A);
	d = (A+3) % 7;
	printf("%d\n", d);
	system("pause");
	return 0;
}
