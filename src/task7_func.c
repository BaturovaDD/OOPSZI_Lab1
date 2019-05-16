#include <math.h>
#include "func.h"

#define PI 3.14159265

double x, y;

void f()
{
	y = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}
