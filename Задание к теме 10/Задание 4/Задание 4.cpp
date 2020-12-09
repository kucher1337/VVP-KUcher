#include <stdio.h>
#include <locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Число :");
	scanf_s("%d", &x);

	if ((((x % 10) > ((x % 100) / 10)) && ((x % 100) / 10 > (x / 100))) || (((x % 10) < ((x % 100) / 10)) && ((x % 100) / 10 < (x / 100)))) {
		printf_s("Число удволетворяет условиям ");
	}
	else {
		printf_s("Число не удовлетворяет условиям");
	}

	return 0;
}
