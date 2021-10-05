//Merge Sort
#include <iostream>
#include <cstdlib>
using namespace std;

void selection_sort (int *space, int size);
int *merge (int *firs_array, int first_array_size, int *second_array, int second_array_size);

int main()
{
	int len1 = 7, len2 = 6;

	int *fst_space = new int[len1];
	int *sec_space = new int[len2];

	for (int i = 0; i < len1; i++)
	{
		*(fst_space + i) = rand()%100;
		if (i != (len1 - len2) - 1)
			*(sec_space + (i - (len1 - len2))) = rand()%100;
	}
	
	cout << "Array 1:  ";
	selection_sort(fst_space,len1);	
	cout << "\nArray 2:  ";
	selection_sort(sec_space,len2);
	
	int *Merge_Array = merge(fst_space,len1,sec_space,len2);

	cout << "\nMerged Array :   ";
	for (int i = 0; i < (len1 + len2); i++)
		cout << Merge_Array[i] << "    ";

        delete []Merge_Array;
	delete []fst_space;
	delete []sec_space;
}

void selection_sort (int *space, int size)
{
	int *end = space + (size - 1), *array = space;
	for (; space < end; space++)
	{
		int *min = space;
		for (int *p = space + 1; p <= end; p++)
			if (*(min) > *(p)) 
				min = p;
		int temp = *min; 
		*min = *space;
		*space = temp;
	}
	for (int i = 0; i < size; i++)
		cout << array[i] << "    ";
}

// merge() : Merge tow sorted arrays to create a nre sorted array.
int *merge (int *first_array, int first_array_size, int *second_array, int second_array_size)
{
	int *New_Array = new int[(first_array_size + second_array_size)];	
	int i = 0, j = 0, k = 0;
	
	for (; i < first_array_size && j < second_array_size; k++)
		New_Array[k] = (first_array[i] <= second_array[j]) ? first_array[i++] : second_array[j++];	

	if (i < first_array_size)
		while (i < first_array_size)
			New_Array[k++] = first_array[i++];
	else
		while (j < second_array_size)
			New_Array[k++] = second_array[j++];

	return New_Array;
}	
