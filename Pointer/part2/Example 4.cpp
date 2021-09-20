#include <iostream>
using namespace std;

void bubble(int *, int, int (*)( int, int ) );
void swap( int * const, int * const );
int ascending( int, int );
int descending( int, int );

int main()
{
	int order,counter,arraySize = 10,a[ arraySize ] = {2,6,4,8,10,12,89,68,45,37};
	int *p[3] = {&order,a,&arraySize};
      	
	cout << "Enter (1) to order in ascending\nEnter (2) to order in descending ";
	cin >> order;

	(order == 1) ? bubble(*(p + 1),**(p + 2),ascending) : bubble(*(p + 1),**(p + 2),descending);

	for (counter = 0; counter < **(p + 2); counter++)
		cout << *(a + counter) << " ";
	cout << endl;
}

void bubble(int * work,int size,int (*compare)( int, int ))
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size-1; j++)
			if (compare(*(work + j),*(work + (j + 1))))
				swap(&work[j],&work[j+1]);
}
void swap( int * const element1Ptr,int * const element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
} 
int ascending(int a, int b){return (a > b);}
int descending(int a, int b){return (a < b);}
