#include <iostream>
#include <cstdlib>
using namespace std;

int* selection_sort (int *array, int size);
void sort (int &a, int &b);

int main()
{
	int len = 10;
	int *array = new int[len];
	
	srand ((unsigned)time(NULL));   // generate random number
	for (int i = 0; i < len; i++)
		array[i] = rand() % 100;

	int *New_Array_Address = selection_sort(array,len);
	delete []array;	

	for (int i = 0; i < len; i++)
		cout << New_Array_Address[i] << "    ";

	delete []New_Array_Address;
}

void swap (int &array_value, int &min_value)
{
	int temp = array_value;
	array_value = min_value;
	min_value = temp;
}

int* selection_sort (int *array, int size)
{
	int *min_address , *end_of_array_address;
	int *New_Array = new int[size];  // own array

	end_of_array_address = array + (size-1);
	
	for (int i = 0; i < size; i++,array++)
	{
		min_address = array;
		for (int *p = array + 1; p <= end_of_array_address; p++)
			if (*p < *min_address)  // (min_address) value
				min_address = p; 
		swap (*array,*min_address);
		New_Array[i] = *array;
	}
	
	return New_Array;
	/*
		return first block address in heap memory
	*/
}	
