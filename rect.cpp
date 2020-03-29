#include<cmath>
void funk2(double rr, double res, double& abser, double& otner)
{
	abser = abs(rr - res);
	if (abser == 0) {
		otner = 0;
	}
	else
		otner = abser / res;
}
