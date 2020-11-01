#include <stdlib.h>
#include <stdio.h>
int main()
{
	double A = 15, B = 14, C=13, n, k;
	n = B;
	B = A;
	k = C;
	C = n;
	A = k;
	printf("%lf\n", A);
	printf("%lf\n", B);
	printf("%lf\n", C);
	system("pause");
	return 0;
}
