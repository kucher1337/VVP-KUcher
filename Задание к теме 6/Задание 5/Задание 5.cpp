#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	double x = 3, y;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	printf("%lf\n", y);
	system("pause");
	return 0;
}
