#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{

	int A, d;
	setlocale(LC_ALL, "Rus");
	printf("Двузначное число:");
	scanf_s("%d", &A);
	d = (A / 10) + (A % 10) * 10;
	printf("%d\n", d);
	system("pause");
	return 0;	
}