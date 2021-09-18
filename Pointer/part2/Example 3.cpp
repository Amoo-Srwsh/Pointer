#include <iostream>
using namespace std;

void sort(int *a, int s)
{
	int *p = a;
	for (int i = 0; i < s; i++)
		for (int j = 0; j < s; j++)
			if (*(p + j) > *(p + (j + 1)))
				swap(p[j],p[j+1]);
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} 
int main()
{
	int a[] = {5,4,3,2,1};
	void(*p)(int*,int) = &sort;
	(*p)(a,5);

	for (int i = 0; i < 5; i++)cout << *(a + i);
	
	cout << endl;
}
