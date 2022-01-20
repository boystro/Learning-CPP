#include <iostream>
#include <vector>

void HelloWorld() {
	std::cout << "Hello World" << std::endl;
}

void PrintValues(int value) {
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values)
		func(value);
}


int main() {

	HelloWorld(); // This is how we normally call functions

	auto func = HelloWorld; // Assigning function to a variable using aut

	void(*func2)(); // Making a function pointer with void return type and no parameters
	func2 = HelloWorld; // Assigning function to its pointer

	
	// Where function pointers are useful
	std::vector<int> values = { 1, 2, 3, 4 };
	ForEach(values, PrintValues);

	// This can also be done using lambda functions
	ForEach(values, [](int value) { std::cout << "Value:" << value << std::endl; });
}