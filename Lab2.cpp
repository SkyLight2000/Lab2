// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include "math.h"
#define FUNC(x) 2*(pow(cos(x), 2)-1)
#define Q(x, n) -pow((2*(x)), 2)/((2*(n)+2)*(2*(n)+1))

	int main()
	{
		double x = 0.1, S = 0.0, a = -pow((2 * x), 2);
		unsigned int n, N = 5;
		for (n = 1; n <= N; ++n) {
			S += a;
			a *= Q(x, n);
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
		system("pause");
		return 0;
}

