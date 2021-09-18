#include <iostream>
using namespace std;

int sum(int a, int b){return a + b;}
int prod(int a, int b){return a * b;}
int compute(int (*p)(int,int),int a, int b){return p(a,b);}

int main()
{
	int (*array_pointer[2])(int,int) = {sum,prod};
	cout << compute(array_pointer[0],2,3) << endl;
	cout << compute(array_pointer[1],2,3) << endl;
}
