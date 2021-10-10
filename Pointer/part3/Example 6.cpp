#include <iostream>
using namespace std;

int *func (int *input)
{
	cin >> *input;
	
	int *d_array = new int[*input];
	for (int i = 0; i < *input; i++)
		cin >> *(d_array + i);
	
	return d_array;
}
int main()
{
	int input,sum = 0,*pointer;
	
	pointer = func(&input);
	
	for (int i = 0; i < input; i++)
		sum += pointer[i];
	
	cout << sum << endl;
		
	delete []pointer;
}
