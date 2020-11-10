#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{

	int A, d;
	setlocale(LC_ALL, "Rus");
	printf("Трехзначное число:");
	scanf_s("%d", &A);
	d = (A % 100) * 10 + A / 100;
	printf("%d\n", d);
	system("pause");
	return 0;
}
