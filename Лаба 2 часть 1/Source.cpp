#include <math.h>//�������������� ����������
#include <stdio.h>//���������� ��� ����� �� ��������

bool IsInArea(float x, float y);

int main()//������� ������ ���������
{
	float x, y;//������ ����� ������������
	float resylt;//������ ����� ������������
	scanf_s("%f", &x);//���������� � ���������� ����� �
	scanf_s("%f", &y);//���������� � ���������� ����� �
	printf("\n x=%.4f; y=%.4f", x, y);//����� � ��������� ������ ����� �,�

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