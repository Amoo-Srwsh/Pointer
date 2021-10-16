#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  	int get_no_var, get_no_eqn;
  
  	cout<<"Enter qty of Rows: ";
  	cin>>get_no_eqn;
  
  	cout<<"Enter qty of Columns: ";
  	cin>>get_no_var;

  	//int (*matrix)[get_no_var] = new int[get_no_eqn][get_no_var];//gaorozcoo form
  	int **matrix = new int* [get_no_eqn];//andywestken form

  
  	for(int i=0; i<get_no_eqn; i++)
        	for(int j=0; j<get_no_var; j++)
               		matrix[i][j]=8;
               
  	for(int i=0; i<get_no_eqn; i++)
	{
        	for(int j=0; j<get_no_var; j++)
		{
               		cout<<matrix[i][j];
        	}
        	cout<<"\n";
	}

  	system("PAUSE");
  
 	delete [] matrix;
	
 	 return 0;
}
