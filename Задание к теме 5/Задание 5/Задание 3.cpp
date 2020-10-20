#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
	double A = 42, B = 121, C = 61, AC, BC, P;
	AC = fabs(C - A);
	printf("%f\n", AC);
	BC = fabs(C - B);
	printf("%f\n", BC);
	P = AC * BC;
	printf("%f\n", P);
	system("pause");
	return 0;
}

	