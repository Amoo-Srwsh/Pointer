//Swap Array Index Using Pointer
//Git HUb Amoo-Srwsh

#include <iostream>

using namespace std;

main()
{
    int a [5] = {5,4,3,2,1};
    int b [5] = {1,2,3,4,5};
    int *p = b;

    for (int i = 0; b[i] != '\0'; i++)
    {
        *(a + i) = *p;
        cout << *(a + i) << "   ";
        p++;
    }
}
