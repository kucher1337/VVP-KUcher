#include <stdlib.h>
#include < math.h>
#include <stdio.h>
int main()
{
	double x1 = 31, y1 = 51, x2 = 64, y2 = 36, a, b, S, P;
	a = fabs(x2 - x1);
	b = fabs(y2 - y1);
	S = a * b;
	printf("%lf\n", S);
	P = (a + b) * 2;
	printf("%lf\n", P);
	system("pause");
	return 0;


}
