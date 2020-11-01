#include <stdlib.h>
#include <stdio.h>
int main()
{
	double A = 15, B = 14, c;
	c = A;
	A = B;
	B = c;
	printf("%lf\n", A);
	printf("%lf\n", B);
	system("pause");
	return 0;
}
