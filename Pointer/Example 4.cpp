//Amoo-Srwsh
//Pointer - Example
#include <iostream>
using namespace std;

int array_len (int a[])
{
	int i = 0; 
	for (; a[i] != '\0'; i++);
	return i;
}
main()
{	
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i = 0, j = 1, *pointer = a, index_array = array_len(a);
			// pointer = first element

	for (int l = 0; l < index_array/2; l++,i+=2,j+=2)
	{
		cout << (pointer + i) << "   " << (pointer + j) << endl;
	}
	i = 0; //Update (i)
	j = 1; //Update (j)
	for (int l = 0; l < index_array/2; l++,i+=2,j+=2)
	{
		cout << *(pointer + i) << "   " << *(pointer + j) << endl;
	}
}
