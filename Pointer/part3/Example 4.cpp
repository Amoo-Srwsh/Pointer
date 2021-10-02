#include <iostream>
#include <cstdlib>
using namespace std;

int* selection_sort (int *array, int size);
void sort (int &a, int &b);

int main()
{
	int len = 10;
	int *a = new int[len];
	
	srand ((unsigned)time(NULL));
	for (int i = 0; i < len; i++)
		a[i] = rand() % 100;

	int *add = selection_sort(a,len);
	delete []a;	
	for (int i = 0; i < len; i++)
		cout << add[i] << "    ";
	delete []add;
}

void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int* selection_sort (int *x, int size)
{
	int *p , *m , *end;
	int *New_Array = new int[size];

	end = x + size-1;
	
	for (int i = 0; i < size; i++,x++)
	{
		m = x;
		for (p = x + 1; p <= end; p++)
			if (*p < *m)
				m = p; 
		swap (*x,*m);
		New_Array[i] = *x;
	}
	
	return New_Array;
}	
