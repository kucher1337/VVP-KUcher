#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	double x1 = 3, y1 = 5, x2 = 2, y2 = 3, s;
	s = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		printf("%f\n", s);
		system("pause");
		return 0;
}