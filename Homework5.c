#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>

double zd(double x, double y, double z);

int main() {
	setlocale(LC_CTYPE, ".UTF-8");

	double x, y, z;
	double rez;

	puts("Введи значение x:");
	scanf("%lf", &x);

	puts("Введи значение y:");
	scanf("%lf", &y);

	puts("Введи значение z:");
	scanf("%lf", &z);

	rez = zd(x, y, z);

	printf("Результат: %lf", rez);

	return 0;
}

double zd(double x, double y, double z) {

	double pt1, pt2, pt3;
	double g;

	pt1 = pow(y, x + 1) / (pow(fabs(y - 2), 1. / 3) + 3);
	pt2 = (x + y/2)/ (2 * fabs(x + y));
	pt3 = pow(x + 1, (-1 / sin(z)));

	g = pt1 + pt2 * pt3;

	return g;
}