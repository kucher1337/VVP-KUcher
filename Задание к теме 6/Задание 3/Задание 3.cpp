#include <stdlib.h>
#include <stdio.h>
int main()
{
	double A = 15, B = 14, C = 13, n, k;
	n = C;
	C = A;
	k = B;
	B = n;
	A = k;
	printf("%lf\n", A);
	printf("%lf\n", B);
	printf("%lf\n", C);
	system("pause");
	return 0;
}
