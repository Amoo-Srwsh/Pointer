#include <iostream>

using namespace std;

main()
{
    int a = 5;
    int *x, **y, ***z;

    x = &a;
    y = &x;
    z = &y;

    // z -> y -> x -> a

    cout << *x << endl;    //5
    cout << **y << endl;   //5
    cout << ***z << endl;  //5

    cout << "\n\n----------------------------\n\n";

    cout << x << endl;     //Address (a)
    cout << y << endl;     //Address (x)
    cout << z << endl;     //Address (y)

    cout << "\n\n----------------------------\n\n";

    cout << ***z << endl; // 5
    cout << **z  ; // Address (a)
    
    cout << "\n\n\n";
    
    cout << sizeof(x) << endl;  //8 Byte in memory
    cout << sizeof(y) << endl;
    cout << sizeof(z) << endl;
}
