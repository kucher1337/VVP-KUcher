#include <stdio.h> //Подключение библиотеки ввода/вывода
#include <math.h>
#include <stdlib.h> //Подключение библиотеки

int main()
{
	double a = 3, b = 1, S, A, E, K;
	S = pow(a, 2)  + pow(b, 2);
	printf("%lf\n", S);
	A = pow(a, 2) - pow(b, 2) *4;
	printf("%lf\n", A);
	E = pow(a, 2) * pow(b, 2) / 2;
	printf("%lf\n", E) + 1;
	K = pow(a, 2) / pow(b, 2);
	printf("%lf\n", K);
	system("pause");
	return 0;
}