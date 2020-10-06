#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h>
#include <stdlib.h> //Подключение библиотеки

int main()
{
	double a = 3, b = 5, S, A, E, K;
	S = fabs(a) - fabs(b) - 4;
	printf_s("%lf\n", S);
	A = (fabs(a) + fabs(b)) * 3;
	printf_s("%lf\n", A);
	E = (fabs(a) * fabs(b))*3;
	printf_s("%lf\n", E);
	K = (fabs(a) / fabs(b)) * 3;
	printf_s("%lf\n", K);
	system("pause");
	return 0;
	}