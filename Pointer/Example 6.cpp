//Amoo-Srwsh
//[2D] array of pointer
#include <iostream>
using namespace std;
int main()
{
	int a[] = {1,2,3};
	int b[] = {6,7,8};
	int c[] = {11,12,13};
	int d[] = {16,17,18};

	int *p[2][2] = {{a,b}
		      ,{c,d}};

	cout << *(*(*(p+0)+0)+0) << endl;
	cout << *(*(*(p+0)+0)+1) << endl;
	cout << *(*(*(p+0)+0)+2) << endl;

	cout << *(*(*(p+0)+1)+0) << endl;
	cout << *(*(*(p+0)+1)+1) << endl;
	cout << *(*(*(p+0)+1)+2) << endl;

	cout << *(*(*(p+1)+0)+0) << endl;
	cout << *(*(*(p+1)+0)+1) << endl;
	cout << *(*(*(p+1)+0)+2) << endl;

	cout << *(*(*(p+1)+1)+0) << endl;
	cout << *(*(*(p+1)+1)+1) << endl;
	cout << *(*(*(p+1)+1)+2) << endl;
}
