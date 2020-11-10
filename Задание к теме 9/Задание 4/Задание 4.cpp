#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include<math.h>
int main()
{
	int A, B, C, d, S;
	setlocale(LC_ALL, "Rus");
	printf("A:");
	scanf_s("%d", &A);
	printf("B:");
	scanf_s("%d", &B);
	printf("C:");
	scanf_s("%d", &C);
	d = (A / C) * (B / C);
	printf("%d\n", d);
	S = A * B - d * sqrt(C);
	printf("%d\n", S);
	system("pause");
	return 0;
}