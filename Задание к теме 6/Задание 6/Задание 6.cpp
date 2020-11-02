#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	double A = 3, b;
	b = A * A * A;
	A = b * b * pow(A,2);
	printf("%lf\n", A);
	system("pause");
	return 0;
}