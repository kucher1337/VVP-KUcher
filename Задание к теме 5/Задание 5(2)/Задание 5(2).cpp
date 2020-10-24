#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
	double x1 = 4, y1 = 10, x2 = 7, y2 = 3, x3 = 5, y3 = 11, a, b, c, S, P;
	a = sqrt((pow)(x1 - x2, 2) + (pow(y1 + y2, 2)));
	b= sqrt((pow)(x2 - x3, 2) + (pow(y2 + y3, 2)));
	c= sqrt((pow)(x1 - x3, 2) + (pow(y1 + y3, 2)));
	P = a + b + c;
	printf("%lf\n", P);
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	printf("%lf\n", S);
	system("pause");
	return 0;
	

}