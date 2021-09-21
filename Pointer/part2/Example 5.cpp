#include <iostream>
// using namespace std ;
#include <cctype> // for std::topper
#include <cassert> // for assert

int square( int v ); // precondition: v is in the range [0,100]
int cube( int ); // precondition: v is in the range [0,100]
int fourthPower( int ); // precondition: v is in the range [0,100]

void tabulateFunction( int, int, int ptFunc( int ) );

// precondition: lbound and ubound are in the range [0,100]
// precondition: lbound < ubound
void tabulateFunction( int lbound, int ubound, int ptFunc( int ) );

int main()
{
    char choice;
    /*
    int lowerBound = 0 - 100;
    int upperBound = 0 - 100;
    */
    int lowerBound ;
    int upperBound ;
    int ( *ptFunc )( int );


    std::cout << "\t\tMenu" << '\n';
    std::cout << "\tS: Square" << '\n';
    std::cout << "\tC: Cube" << '\n';
    std::cout << "\tF: Fourth Power" << '\n';
    std::cout << "\tQ: Quit" << '\n';
    std::cout << "Please choose s,c,f or q. Then choose 2 integers between 0-100: " << '\n';

    std::cin >> choice ;

    switch( choice )
    {
        case 'S':
            ptFunc = &square;
            break;
        case 'C':
            ptFunc = &cube;
            break;
        case 'F':
            ptFunc = &fourthPower;
            break;
        case 'Q':
            std::cout << "Quitting" << '\n';
            // break;
            return 0 ;
        default:
            std::cout << "Invalid Selection. quitting." << '\n';
            return 1 ; // EXIT_FAILURE
    }

    std::cin >> lowerBound >> upperBound ;

    if( lowerBound < 0 || upperBound > 100 || lowerBound > upperBound )
    {
        std::cout << "invalid range. quitting.\n" ;
        return 1 ; // EXIT_FAILURE
    }
    else
    {
        tabulateFunction( lowerBound, upperBound, ptFunc );
    }

    // return 0; // implicit
}

void tabulateFunction( int lower, int upper, int ptFunc( int ) )
{
    // assert the preconditions
    assert( lower >= 0 && upper <= 100 && lower < upper ) ;

    std::cout << "The range of numbers selected is from " << lower << " to " << upper << '\n';
    for( int i = lower; i < upper; i++ ) // ***  i <= upper if the range is [lower,upper]
                                         // ie. from lower up to and including upper
    {
        std::cout << i << ": " << ptFunc( i ) << '\n';
    }
}

int square( int num )
{
    /*
    int squared = num * num;
    return squared;
    */

    // assert the precondition
    assert( num >= 0 && num <= 100 ) ;
    return num * num ;
}

int cube( int num )
{
    /*
    int cubed = num * num * num;
    return cubed;
    */

    // assert the precondition
    assert( num >= 0 && num <= 100 ) ;
    return num * num * num;
}

int fourthPower( int num )
{
    /*
    int fourthpower = num * num * num * num;
    return fourthpower;
    */

    // assert the precondition
    assert( num >= 0 && num <= 100 ) ;
    return num * num * num * num;
}
