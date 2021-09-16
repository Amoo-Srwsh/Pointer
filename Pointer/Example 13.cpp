#include <iostream>

int subtraction(int lhs, int rhs){return lhs - rhs;}
int addition (int lhs, int rhs){return lhs + rhs;}

int operation (int lhs, int rhs, int(*point_to_function)(int,int))
{
    return point_to_function(lhs,rhs);
}

int main ()
{
    std::cout << operation (9, 6, subtraction) << "\n";
    std::cout << operation (9, 6, addition);
}
