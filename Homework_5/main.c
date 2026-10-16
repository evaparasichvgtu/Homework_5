#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;
	const double a = 7.1e-9;
	printf("a = %g\n", a);
	puts("введите значения x и y:");
	scanf("%lf %lf", &x, &y);
	double fxy = (cos(pow(x, 3) + 6) - sin(y - a)) / (log(pow(x, 4)) - 2 * pow(sin(x), 5));
	printf("f(x,y) = %f\n", fxy);
	return 0;
}