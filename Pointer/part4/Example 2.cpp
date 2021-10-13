#include <iostream>
#include <string>

using namespace std;

void getargs(int& height, int& width, int& length);
int ***initializearray(int& height, int& width, int& length, int*** carray);
void printarray(int& height, int& width, int& length, int*** carray);
bool goagain();
void freearray(int*** carray, int width, int length);

//Main function declares variables, then cycles
//through functions to get arguments from user,
//then set the carray pointer to the value
//the user specifies. Then print array.
//Next, use a while loops to determine if the
//user would like to resize the array.
//If so then repeat, otherwise free memory.
int main()
{
	int height, width, length;
	int ***carray = NULL;
	
	do
	{
		getargs(height, width, length);
		carray = initializearray(height, width, length, carray);
		printarray(height, width, length, carray);

	} while(goagain());
	
	freearray(carray,width,length);
}

//Function takes in arguments declared in main and
//sets them to a user defined value.
void getargs(int& height, int& width, int& length)
{
	cout << "Enter a height for your array: " << endl;
	cin >> height;
	cout << "Enter a width for your array: " << endl;
 	cin >> width;
   	cout << "Enter a length for your array: " << endl;
    	cin >> length;
}

//Get values defined by user. Pass array into function.
//Allocate a 3 dimensional array and give it values.
//Delete the old array and pass the pointer to the new memory.
int ***initializearray(int& height, int& width, int& length, int*** carray)
{
	int ***p_temparray = new int**[length];
	for(int i = 0;i < length;i++)
 	{
		p_temparray[i] = new int*[width];
        	for(int j = 0;j < width;j++)
        	{
            		p_temparray[i][j]=new int[height];
           	        for(int x = 0;x < height;x++)
            		{
                  		p_temparray[i][j][x] = (i*j*x);
            		}
        	}

    	}

	if (carray != NULL)
	{
		freearray(carray,width,length);
	}
		
   	return p_temparray;
}

//Get height width and length then print the values for each
//array coordinate.
void printarray(int& height, int& width, int& length, int *** carray)
{
        for(int i = 0;i < length;i++)
    	{
        	for(int j = 0;j < width;j++)
        	{
            		for(int x = 0;x < height;x++)
            		{
                		cout<<"carray["<<i<<"][" << j << "][" << x << "]=" << carray[i][j][x] << endl;
            		}
        	}
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
void freearray(int*** carray,int width,int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
				delete []carray[i][j];
		delete []carray[i];
	}

    	delete [] carray;
}
