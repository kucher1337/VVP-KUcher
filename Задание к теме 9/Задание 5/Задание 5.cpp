#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	int A, d;
	setlocale(LC_ALL, "Rus");
	printf("Номер года:");
	scanf_s("%d", &A);
	d = ((A - 1)/ 100) + 1;
	printf("%d\n", d);
	system("pause");
	return 0;
}


