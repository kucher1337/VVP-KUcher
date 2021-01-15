#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Количество :");
	scanf_s("%d", &a);
	printf("Элементы массива :");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a; c++) {
			if ((mass[b] == mass[c]) && (b != c) && (b < c)) {
				printf("Номера одинаковых элементов: %d %d", b, c);
			}
		}
	}
	return 0;
}
