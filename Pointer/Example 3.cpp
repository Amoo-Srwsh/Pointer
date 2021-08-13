//Change Second Array Index Usign Pointers
//Git HUb Amoo-Srwsh

#include <iostream>

using namespace std;

main ()
{
    int a[] = {5,7,2};
    int *p;
    p = a;

    *(p + 1) = 8;

    for (int i = 0; i < 3; i++)
    {
        cout << *(a + i) << "  " ;
    }
}