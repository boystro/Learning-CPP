/*
Type Punning
Even though C++ is strongly typed language, we can use any
data type as any other data type, this is because C++ has 
access to memory which we can use to represent any form of
data in our code.
Example: An int can be used as a float.
*/

#include <iostream>

int main()
{
	int arr[2] = { 1,3 };
	
	int p = *(int*)arr;

	std::cout << p << std::endl;

	int a = 5;
	float& b = *(float*)&a;

	// "b" might give a weird result but that is because we
	// are using an int memory to be represented as float
	std::cout << a << " | " << b << std::endl; 
}