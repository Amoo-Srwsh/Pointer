//Dynamically allocated multi-dimensional arrays
//http://www.cplusplus.com/search.do?q=Dynamically+allocated+multi-dimensional+arrays
#include <iostream>
using namespace std;

int main()
{
	int i = 10, j = 5;
	int **a = new int*[i];
	
	for (int p = 0; p < i; p++)
		*(a + p) = new int[j];

	int k = i,p = j;	
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < p; j++)
		{
			a[i][j] = (j + 1);	
			cout << a[i][j] << "    ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < 10; i++)
		delete []a[i];

	delete []a;
}
