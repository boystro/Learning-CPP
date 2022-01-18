/*

They are similar to pointers, but dont actually store anything
they are like alias to the actual variable.

They are declared by an ampersand(&) before the name of the 
reference

*/
#include <iostream>

int main()
{
    int a = 5;
    int& ref_a = a;

    std::cout << ref_a << std::endl;
}
