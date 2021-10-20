#include <iostream>
#include "Header.h"
#include<stdio.h>
#define a "Hi"
#define b "Bad"
#define sqr(x) ((x)*(x))

int main()
{
	system("chpc 1251>nul");

	printf("%d \n", summ(3, 8));
	printf("%d \n", mine(9, 8));
	printf("%d \n", del(8, 4));
	printf("%d\n", umn(3, 8));

	char m[] = a;
	char* p = m;
	char m1[] = b;
	char* p1 = m1;

	printf("%s \n", mass(p, p1));
	printf("%d", sqr(6));

	float x1, x2, y1, y2, res;
	printf("x1= ");
	scanf_s("%f", &x1);
	printf("y1= ");
	scanf_s("%f", &y1);
	printf("x2= ");
	scanf_s("%f", &x2);
	printf("y2= ");
	scanf_s("%f", &y2);

	printf("Ответ= %f", sqrt((sqr(x1 - x2)) + (sqr(y1 - y2))));
}

