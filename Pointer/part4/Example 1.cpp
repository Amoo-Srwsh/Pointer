//Dynamically allocated multi-dimensional arrays
//http://www.cplusplus.com/search.do?q=Dynamically+allocated+multi-dimensional+arrays
#include <iostream>
using namespace std;

int main()
{
	int n,e;
	cout << "Enter Number Student : ";
	cin >> n;
	int **student = new int*[n]; 
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter Number Exam For Student " << (i + 1) << " : ";
		cin >> e;
		student[i] = new int[e];
		for (int j = 0; j < e; j++)
		{
			cout << "Score " << (j + 1) << " : ";
			cin >> student[i][j];
		}
		int sum = 0;
		for (int k = 0; k < e; k++)
			sum += student[i][k];
		cout << "Average = " << (float) sum / e << endl;
		delete []student[i];
	}
	
	delete []student;
}
