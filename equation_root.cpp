#include <cmath>
#include <iostream>
using namespace std;

void funk1(double a, double b, int n, double& parabola, double& rect, double&res)
{
	res = asin(b) - asin(a) - sqrt(1 - b * b) + sqrt(1 - a * a);
	double dx;
	double r = 0;
	dx = (b - a) / n;
	double t = a + dx / 2;
	for (int i = 0; i < n; i++) {
		r += sqrt((t + 1) / (1 - t));
		t += dx;
	}
	rect = dx * r;
	double p = sqrt((a+1)/(1-a))+sqrt((b+1)/(1-b)),
		p1 = 0,
		p2 = 0;
	double x1 = 0,
		x2 = 0;
	int k = 0;
	for (int i = 1; i <= n/2 - 1; i++) {
		k = 2 * i;
		x1 = a + dx * (k - 1);
		x2 = a + k * dx;
		p1 += sqrt((x1+1)/(1-x1));
		p2 += sqrt((x2 + 1) / (1-x2));
	}
	x1 =a+((n-1)*dx);
	p1 += sqrt((x1 + 1) / (1-x1));
	p =p+2* p1 + 4 * p2;
	parabola = p * dx / 3;
}