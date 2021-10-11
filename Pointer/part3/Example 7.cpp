//Dynamically allocated multi-dimensional arrays
//http://www.cplusplus.com/search.do?q=Dynamically+allocated+multi-dimensional+arrays
#include <iostream>
using namespace std;

int main()
{
	int **p = new int *[3];
	int a = 10,b = 20,c = 30;
	
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	
	for (int i = 0; i < 3; i++)
		cout << *(p)[i] << "    ";
	cout << endl;
	delete []p;
}
