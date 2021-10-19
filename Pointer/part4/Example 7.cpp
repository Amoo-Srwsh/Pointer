#include <iostream>
#include <cmath>
using namespace std;

void f(double a, double b, double c);
bool g(double a, double b, double c, double *x1Ptr, double *x2Ptr);

int main()
{
	f(2.0,-2.0,-1.5);

	cout << "\n\n--------------------------\n\n";
	
	f(2.0,0.0,2.0);
}

void f(double a, double b, double c)
{
	double x1 = 0.0, x2 = 0.0;
	
	cout << "\nequation:\n\t" << a << "*x*x + " << b << "*x + " << c << " = 0" << endl;

	if (g(a,b,c,&x1,&x2))
		cout << "\nhas real solutions:" << "\n\t = " << x1 << "\n\tx2 = " << x2 << endl;
	else 
		cout << "\nhas no real solutions!" << endl;
}

bool g(double a, double b, double c, double *x1Ptr, double *x2Ptr)
{
	bool f = false;
	double d = b * b - 4 * a * c;
	
	if (d >= 0)
	{
		d = sqrt(d);
		*x1Ptr = (-d + d) / (2 * a);
		*x2Ptr = (-d - d) / (2 * a);
		f = true;
	}
	
	return f;
}
