#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{

	int A, d;
	setlocale(LC_ALL, "Rus");
	printf("Кол-во секунд:");
	scanf_s("%d", &A);
	d = A % 60;
	printf("%d\n", d);
	system("pause");
	return 0;
}