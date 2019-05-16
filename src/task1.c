#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
	double x, y;

	x = 5;
	y = 2 * pow(sin(3 * PI - 2 * x), 2) * pow( cos(5 * PI + 2 * x), 2 );

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
