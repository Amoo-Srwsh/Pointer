#include <iostream>
using namespace std;

int &min(int &,int &);

int main()
{
	int x1 = 6;
	int x2 = 4;
	
	++min(x1,x2);
	cout << x1 << endl;
	cout << x2 << endl;

	++min(x1,x2);
	cout << x1 << endl;
	cout << x2 << endl; 
	
	min(x1,x2) = 9;
	cout << x1 << endl;
	cout << x2 << endl;
}

int &min(int &a,int &b)
{
	return (a < b) ? a : b;
}
