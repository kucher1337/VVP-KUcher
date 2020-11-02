#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	double A = 2, b, c;
	b = A * A * A;
	c = b * b;
	c = c * c;
	A = b * c;
	printf("%lf\n", A);
	system("pause");
	return 0;
}