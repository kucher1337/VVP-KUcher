#include <stdio.h>
#include <locale.h>

int main()
{
	int A, B;
	setlocale(LC_ALL, "Rus");
	printf("Значение A:");
	scanf_s("%d", &A);
	printf("Значение B:");
	scanf_s("%d", &B);
	if (A > B) {
		B = A;
	}
	else if (A < B) {
		A = B;
	}
	else {
		A = 0;
		B = 0;
	}
	printf_s("переменная А: %d", A);
	printf_s("переменная В: %d", B);

	return 0;
}