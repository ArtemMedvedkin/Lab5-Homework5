//#define _CRT_SECURE_NO_DEPRECATE
//#define _USE_MATH_DEFINES 
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//#define M_PI 3.14159265358979323846
//
//int zd1();
//int zd2();
//int example();
//double F(double a, double b);
//
//int main() {
//
//	double a;
//	double b;
//	double result;
//
//	setlocale(LC_CTYPE, ".UTF-8");
//	
//	puts("Введи значение a");
//	scanf("%lf", &a);
//
//	puts("Введи значение b");
//	scanf("%lf", &b);
//
//	result = F(a, b);
//	printf("Результат: %lf", result);
//
//	zd1();
//	zd2();
//	example();
//}
//double F(double a, double b) {
//
//	double rez1;
//
//	rez1 = sqrt(sin(a) + b);
//	
//	double rez2;
//
//	rez2 = log(b) + 4 * a;
//
//	double rez;
//	
//	rez = rez1 / rez2;
//	
//	return rez;
//}
//int example() {
//
//	double x, y, rez1, rez2, rez3, rez4, rez5, result;
//
//	puts("Введи x и y:");
//	scanf("%lf %lf", &x, &y);
//
//	rez1 = 0.5 * y;
//	rez2 = pow(x, rez1);
//	rez3 = sin(rez2);
//	rez4 = y + 8e-4;
//	rez5 = pow(rez4, 1 / 5.f);
//	result = rez3 + rez5;
//
//	printf("Ответ: %.3f\n", result);
//	printf("ответ:  %.3f\n", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
//
//	return 0;
//}
//
//int zd1() {
//
//	double gr, rad;
//
//	puts("Введите значение угла в градусах для вычисления sin этого угла:");
//	scanf("%lf", &gr);
//
//	rad = gr * M_PI / 180;
//
//	printf("sin %g градусов = %.6f\n", gr, sin(rad));
//
//	return 0;
//}
//
//int zd2() {
//
//	const double p = 3.0;
//	double x, y, a, b;
//
//	puts("Введите значение x:");
//	scanf("%lf", &x);
//
//	a = pow(p * x, 1. / 2);
//	printf("a = %f\n", a);
//
//	b = p * pow(x, 2) + pow(a, 1. / 2);
//	printf("b = %f\n", b);
//
//	y = pow(log(pow(b, 2)), 3) + a * x;
//	printf("y = %.1f\n", y);
//
//	int A = (int)a, B = (int)b, C = (int)y;
//
//	printf("A = %d, B = %d, C = %d\n", A, B, C);
//
//	int rez_a = (A % 2 == 0) ^ (B % 2 == 0);
//
//	printf("a) выражение истинно (1 - да, 0 - нет): %d\n", rez_a);
//
//	int rez_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
//
//	printf("б) выражение истинно (1 - да, 0 - нет): %d\n", rez_b);
//
//	return 0;
//}