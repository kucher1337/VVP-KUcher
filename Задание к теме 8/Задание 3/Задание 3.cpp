#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int A, B, C;
	setlocale(LC_ALL, "Rus");
	printf("Длина A:");
	scanf_s("%d", &A);
	printf("Длина B:");
	scanf_s("%d", &B);
	C = A % B ;
	printf("%d\n", C);
	system("pause");
	return 0;
}

