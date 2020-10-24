#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
	double A = 42, B = 121, C = 61, AC, BC, P;
	AC = fabs(C - A);
	printf("%lf\n", AC);
	BC = fabs(C - B);
	printf("%lf\n", BC);
	P = AC * BC;
	printf("%lf\n", P);
	system("pause");
	return 0;
}

	