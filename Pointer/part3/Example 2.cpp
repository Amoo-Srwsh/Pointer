// Dynamic Array
/* You can improve this code with a simple function (realloc) */
#include <iostream>
using namespace std;

int main()
{
	int x, size = 0, counter = 0; 
	int *a = NULL;
	int *p = NULL;

	while ( cin >> x )
	{
		if (counter >= size)
		{
			p = new int[size + 3];
			
			for (int i = 0; i < size; i++)
				p[i] = a[i];

			delete a;

			a = p;
			size += 3;
		}
		a[counter] = x;
		counter ++;
	}

	if (counter == 0)
		cout << "Invalid input \n";
	else
	{
		int sum = 0;
		for (int i = 0; i < counter; i++) 
			sum += p[i];
		cout << "Average = " << (float) sum/counter << endl;
	}
	delete a;
}
