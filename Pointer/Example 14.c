#include <stdio.h>
#include <stdbool.h>

bool compare(int a, int b)
{
	return (a > b) ? true : false;
}
void Bsort(int *a, bool (*compare_address)(int,int))
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (compare_address(*(a + j),*(a + (j + 1))))
			{	
				int temp = *(a + j);
				*(a + j) = *(a + (j + 1));
				*(a + (j + 1)) = temp;
			}
		}
	}
}
int main()
{
	int a[] = {9,8,7,6,5,4,3,2,1};
	Bsort(a,compare); //Array and function argument

	for (int i = 0; i < 9; i++) printf("%i",*(a + i));	

	printf("\n");

	return 0;
}
