# Домашнее задание к работе 5

# Условие задачи
# Вариант 18
Написать программу вычисления значения функции двух переменных. Результат проверить на контрольном примере.
<img width="857" height="88" alt="Снимок экрана 2026-10-16 233339" src="https://github.com/user-attachments/assets/cf25459e-6180-47b4-a950-b7eafcccc129" />

# Блок-схема
<img width="530" height="752" alt="Снимок экрана 2026-10-16 233327" src="https://github.com/user-attachments/assets/12d541e5-0085-45f6-9307-ebd1ddb878a5" />

# Код
```
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
```

# Вывод:
Программа вычисляет значение функции двух переменных по заданной формуле с константой a = 7.1e-9. Пользователь вводит значения х и у, после чего выводится результат.
