#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	float a, b;
	setlocale(LC_ALL, "Rus");
	printf_s("Размер в байтах:");
	scanf_s("%f", &a);
	b = a / 1024;
	printf_s("%.lf\n", b);
	system("pause");
	return 0;
}

