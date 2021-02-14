#include <math.h>//математическая библиотека
#include <stdio.h>//библиотека для работ со строками

bool IsInArea(float x, float y);

int main()//функция начала программы
{
	float x, y;//формат числа вещественный
	float resylt;//формат числа вещественный
	scanf_s("%f", &x);//Считывание с клавиатуры числа х
	scanf_s("%f", &y);//считывание с клавиатуры числа у
	printf("\n x=%.4f; y=%.4f", x, y);//вывод в командную строку числа х,у

	if
		(
			IsInArea(x,y)
			)
		printf("\n resylt=1");
	else printf("\n resylt=0");
	return 0;
}
bool IsInArea(float x, float y)
{
	if
		(
			(y <= -x + 1 && x >= 0 && y >= 0) || (y <= 0 && x <= 0 && y >= -1 && x >= -1)
			)
		return 1;
	else return 0;
}