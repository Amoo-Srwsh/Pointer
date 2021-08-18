#include <iostream>
using namespace std;

main()
{
	int b[2][3] = {{2,3,6},{4,5,8}};

	int (*p)[3] = b;

	//2/3/6/   b[0]
	//4/5/8/   b[1]
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << (b+i)+j << endl;
		}
		cout << endl;
	}
}