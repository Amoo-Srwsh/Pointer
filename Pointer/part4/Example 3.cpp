#include <iostream>
#include <string>

using namespace std;

void getargs(int& height, int& length);
void initializearray(int& height, int& length, int*** carray);
void printarray(int& height, int& length, int*** carray);
bool goagain();
void freearray(int **carray, int length);

//Main function declares variables, then cycles
//through functions to get arguments from user,
//then set the carray pointer to the value
//the user specifies. Then print array.
//Next, use a while loops to determine if the
//user would like to resize the array.
//If so then repeat, otherwise free memory.

int main()
{
	int height, length;
	int **carray = NULL;
	
	do
	{
		getargs(height, length);
		initializearray(height, length, &carray);
		printarray(height, length, &carray);

	} while(goagain());
	
	freearray(carray,length);
}

//Function takes in arguments declared in main and
//sets them to a user defined value.
void getargs(int& height, int& length)
{
	cout << "Enter a height for your array: " << endl;
	cin >> height;
   	cout << "Enter a length for your array: " << endl;
    	cin >> length;
}

void initializearray(int& height, int& length, int*** carray)
{
	if (*(carray) != NULL)
		freearray(*(carray),length);

	*(carray) = new int*[length]; 
	for (int i(0); i < length; i++)
	{
		*(*(carray) + i) = new int[height];
		for (int j(0); j < height; j++)
			*(*(*(carray) + i) +  j) = (i * j);	
	}
}
	
void printarray(int& height, int& length, int*** carray)
{
	for (int i(0); i < length; i++)
	{
		for (int j(0); j < height; j++)
			cout << "[" << i << " * " << j << "] = " << *(*(*(carray) + i) +  j) << endl;
		cout << endl << endl;
	}
}

//Check to see if user wants to resize array.
//If so, then loop functions again.

bool goagain()
{
	string arg;
	cout << "Would you like to resize the array?\n";
	cin >> arg;

   	if(arg == "y")
        	return true;
	return false;
}

//Cycle through the array and delete allocated memory.
void freearray(int **carray, int length)
{
	for (int i = 0; i < length; i++)
		delete []carray[i];
	delete []carray;
}
