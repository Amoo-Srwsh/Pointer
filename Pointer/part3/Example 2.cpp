#include <iostream>
using namespace std;

int main()
{
        int x,counter = 0;
        int *p = NULL;

        while ( cin >> x )
        {
                p = (int*) realloc (p, 1 * sizeof(int));
                p[counter++] = x;
        }
	
        if (counter == 0)
                cout << "Invalid input \n";
        else
        {
                int sum = 0;
                for (int i = 0; i < counter; i++)
                        sum += p[i];
                cout << "Average = " << (float) sum/counter << endl;
        }

        free (p);
}
