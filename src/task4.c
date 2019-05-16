#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void f();
double x, result;

int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	
	system("pause");
	return 0;
}

void f()
{
	result = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}
