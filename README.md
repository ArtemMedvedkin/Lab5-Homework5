<h1>Домашнее задание к работе 5</h1>
<h1>Вариант 14</h1>
<h2>Условие задачи</h2>
<h2>Алгоритм и блок схема функции zd</h2>
<img width="150" height="500" alt="image" src="https://github.com/ArtemMedvedkin/Lab5-Homework5/blob/main/image.png" />
<h2>Реализация программы</h2>
#define _CRT_SECURE_NO_DEPRECATE<br>
#define _USE_MATH_DEFINES <br>
#include <stdio.h><br>
#include <locale.h><br>
#include <math.h><br>

double zd(double x, double y, double z);<br>

int main() {<br>
	setlocale(LC_CTYPE, ".UTF-8");<br>

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
<h2>Информация о разработчике</h2>
Медведкин Артем бТИИ-262<br>
