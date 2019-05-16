#include <stdio.h>
#include <math.h>

#define PI 3.14159265


double f(double x)
{
	return 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}

int main()
{
	double x, y;

	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
