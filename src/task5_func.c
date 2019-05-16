#include <math.h>

#define PI 3.14159265

double f(double x)
{
	return 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}
