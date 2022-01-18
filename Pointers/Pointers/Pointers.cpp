/*

Pointers are basically integer variables that store
the memory (RAM) address of a variable.
We can use pointers to get the value at the
memory location.
They can be used in multiple ways.

They are declared with an asterisk(*) symbol before
the variable name of the pointer. the datatype of
pointer is just a hint of what may be present at
the memory address the pointer is pointing at.

Pointers only store the base memory address.

To get the memory address of a variable use
the ampersand(&) before the variable.

To dereference a pointer / get the value present
at the memory address use an asterisk(*) before the
pointer variable.

*/
#include <iostream>

int main() {

	// Simple Pointer
	int a = 5;
	int* ptr_a = &a;
	
	std::cout << *ptr_a << std::endl;	// This will print the value of a
	std::cout << ptr_a << std::endl;	// This will print the memory address of a
	std::cout << &a << std::endl;		// This will also print the memory address of a
	std::cout << *(&a) << std::endl;	// This will print the value of a

}