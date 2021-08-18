//pointer to 2D-arrays
#include <iostream>
using namespace std;
int main()
{
	int a[2][3] = {11,12,13,14,15,16};

	int (*p)[3];

	p = a;

	cout << *(*p+5);

	cout << endl;

	cout << *(*(p+1) + 2);
}
