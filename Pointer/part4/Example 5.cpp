#include <iostream>
#include <stdlib.h>

using namespace std;

int &min (int &,int &);	

int main()
{
	int x = 3;
	int y = 5;
	
	min(x,y) = 8;
	
	cout << x << endl;
	cout << y << endl;
	cout << min(x,y) << endl;
}

int &min (int &a, int &b)
{
	return (a > b) ? a : b;
}	
