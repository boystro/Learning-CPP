/*
Parts of a lambda function
[] : Capture - It passes variables by reference or value
() : Parameters / Arguments - They are just like normal function arguments
{} : Scope / Code Block - They contain the body of the function
*/

#include <iostream>
#include <vector>

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values)
		func(value);
}

int main() {
	// This lambda uses normal parameters
	auto lambda = [](int value) { std::cout << value << std::endl; };
	std::vector<int> vect = { 1, 2, 3, 4, 5 };

	// Example of lambda functions
	ForEach(vect, lambda);

	// Example of lambda capture
	std::string a = "Hello";
	auto lambda2 = [&a]() {std::cout << a << std::endl; };
	lambda2();
}