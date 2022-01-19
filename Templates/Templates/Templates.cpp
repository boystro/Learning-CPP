/*
Templates generate code during compile time,
dending on the use case of classes and functions.
*/

#include <iostream>


// Template objects
template<typename T, int N>
class Array {
private:
	T m_arr[N];

public:
	int getSize() const { return N; }
};

// Template functions
template<typename T> // template<class T> is EXACTLY same but class keyword is best left for creating objects
void Print(T value) {
	std::cout << value << std::endl;
}

int main() {
	Array<int, 10> arr;
	Array<std::string, 4> arr2;

	Print(5); // Implicit typing
	Print(6.3f); // Explicit typing
	Print("Hello");
}