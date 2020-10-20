#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
	double A = 77, B = 54, C = 122, AC, BC, S;
	AC = fabs(C - A);
	printf("%f\n", AC);
	BC = fabs(C - B);
	printf("%f\n", BC);
	S = AC + BC;
	printf("%f\n", S);
	system("pause");
	return 0;
}

