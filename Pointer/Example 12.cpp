#include <iostream>

// type alias for a unary function with parameter of type int and returning a prvalue of type int
using function_type = int(int) ; // 1. C++11 syntax for type alias
typedef int function_type(int) ; // 2. classic typedef; same as above

// type alias for pointer to function of type function_type
using ptr_function_t = function_type* ; // 3. C++11 syntax for type alias
typedef function_type* ptr_function_t ; // 4. classic typedef; same as above
typedef function_type *ptr_function_t ; // 5. classic typedef; same as above
using ptr_function_t = int(*)(int) ; // 6. same as above, ugly syntax
typedef int (*ptr_function_t)(int) ; // 7. same as above, uglier syntax

// note: programmers who like to emphasise semantics over syntx favour 1/2, 3/4, 6
//       programmers who like to emphasise syntax over semantics favour 2, 5/7
//       pick the one that appeals to you, and be consistent (use the same style everywhere)

// a C++ function "with a function pointer argument" (with a parameter of type ptr_function_t)
// invariant: ptr_function is not null
// invariant: evaluation of ptr_function(arg) does not cause a signed integer overflow
int call_function( ptr_function_t ptr_function, int arg )
{
    // a pointer to a function is a 'callable object'.
    return ptr_function(arg) ;  // call the function which is pointed to by ptr_function

    // or, same as above:
    // dereference pointer to function to get an lvalue of type function and call the function
    // return (*ptr_function)(arg) ; // avoid; does not work with other kinds of callable objects
}

// a function of type function_type
int reverse( int arg ) // invariant: arg in [0,100]
{
    if( arg == 100 ) return 1 ;
    else if( arg < 10 ) return arg ;
    else return (arg%10) * 10 + (arg/10) ;
}

int main()
{
    int v = 72 ;

    // pass pointer to function 'reverse' as the first argument, v as the second argument
    int rv = call_function( &reverse, v ) ;

    // implicit converstion from lvalue of type function_type to prvalue of type pointer to function_type
     rv = call_function( reverse, v ) ;

    std::cout << rv << ' ' << reverse(v) << ' ' << call_function( reverse, v ) << '\n' ;

    // exercise in calling functions:
    std::cout << v << ' ' << reverse(rv) << ' ' << reverse( reverse(v) ) << ' '
              << call_function( reverse, rv ) << ' ' << call_function( &reverse, rv )
              << ' ' << call_function( &reverse, call_function( reverse, v ) ) << '\n' ;
}