#include <iostream>
#include "equation_root.h"
#include "rect.h"
using namespace std;
int main()
{double
		a,
		b;
	int n;
	double
		res = 0,
		parabola = 0,
		rect = 0,
		abser = 0,
		otner = 0;
	cout << "A= ";
	cin >> a;
	cout << endl;
	if (a<-1 || a>=1)
		cout << "ERROR A" << endl;
	else{
		cout << "B= ";
		cin >> b;
		cout<< endl;
		
		if (b>=1)
			cout << "ERROR B" << endl;
		else{
			cout << "N= ";
			cin >> n;
			cout << endl;
			if (n < 0)
				cout << "ERROR N" << endl;
			else{
				
				funk1(a, b, n, parabola, rect,res);
				cout << "res= " << res << endl;
				funk2(parabola,res,abser, otner);
				cout << "integral_parabola= " << parabola << endl << "absolute error parabola =" << abser << endl << "reative error parabola= " << otner << endl;
				funk2(rect, res, abser, otner);
				cout<<"integral_rect= " << rect << endl<< "absolute error rect =" << abser << endl<< "reative error rect= " << otner << endl;
			}
		}	
	}
}

