// Tab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	double a = 2, b = 4, c = -1, d = 1, h1 = 0.1, h2 = 0.12;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h2) {
		printf("\t%8.2f", x);
	}
	printf("\n");
	for (double y = c; y <= d; y += h1) {
		printf("%.2f", y);
		for (double x = a; x <= b; x += h2) {
			double z = (x*x*y) / (pow((x - y), 1.0 / 4));
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
