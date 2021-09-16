#include <iostream>

int subtraction(int lhs, int rhs){return lhs - rhs;}
int addition (int lhs, int rhs){return lhs + rhs;}

int (*minus)(int,int) = subtraction;
int (*plus)(int, int) = addition;

typedef int(*functocall)(int, int);
//using functocall = int(*)(int, int); //alternative C++11 syntax

int operation (int lhs, int rhs, functocall compute)
{
    return compute(lhs,rhs);
}

int main ()
{
    std::cout << operation (9, 6, minus) << "\n";
    std::cout << operation (9, 6, plus);
}
