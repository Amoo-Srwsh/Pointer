//Amoo-Srwsh
//array of pointer to arrays
#include <iostream>
using namespace std;

main()
{
	int a[2] = {1,2};  // (a) using 2 element
	int b[3] = {3,4,5};  // (b) using 3 element

	int *p[] = {a,b};    //p[] = {0x00,0x00};   //Example//

	cout << *(p[0]) << endl;
	cout << *((p[0])+1) << endl;

	cout << *(p[1]) << endl;
	cout << *((p[1])+1) << endl;
	cout << *((p[1])+2) << endl;
}
