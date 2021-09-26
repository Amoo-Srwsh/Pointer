#include <iostream>
#include <stdio.h>
using namespace std;

int *f (int *a1, int len1 ,int *a2 ,int len2 ,int pos);

int main()
{
	int len1 = 3, len2 = 2;

	int *a1 = new int [len1]; 
	int *a2 = new int [len2];

	cout << "\nArray 1:    ";
	for (int i = 0; i < len1; i++){
		a1[i] = rand()%100;
		cout << a1[i] << "    ";
	}

	cout << "\nArrya 2:    ";
	for (int i = 0; i < len2; i++){ 
		a2[i] = rand()%100; 
		cout << a2[i] << "    ";
	}

	int pos;
	cout << "\nWhat position ? "; 
	cin >> pos;

	int *a3, len3;
	len3 = len1 + len2; 
	a3 = f(a1,len1,a2,len2,pos); 
	
	if (a3 == NULL)
		cout << "\nInvalid position!\n";
	else
	{
		cout << "New Array: ";
		for (int i = 0; i < len3; i++) 
			cout << *(a3 + i) << "    ";
		cout << endl;
	}
	
	delete []a1;
	delete []a2;
	delete []a3;
}

int *f (int *a1, int len1, int *a2, int len2, int pos)
{
	if (pos < 0 || pos >= len1)
		return NULL;

	int *a = new int[len1 + len2]; 

	int i = 0, j = 0, k = 0;
	
	for (i = 0; i < pos; i++, k++)
                *(a + k) = *(a1 + i);
        for (j = 0; j < len2; ++j, ++k)
                *(a + k) = *(a2 + j);
        for (; i < len1; ++i, ++k)
                *(a + k) = *(a1 + i); 
	
	return a; 
}
