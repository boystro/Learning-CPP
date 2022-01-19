/*
MACROS
This is a piece of text that gets replaced with some other text.
*/

#include <iostream>
#include <string>

#define HI "Hello World" // Macro with a string, but its basically text that gets copy pasted
#define LOG(x) std::cout << x << std::endl // Same here but x is replaced with the actual argument passed

#ifdef PR_DEBUG
#define LOG2(x) std::cout << x << std::endl
#else
#define LOG2(x)
#endif // PR_DEBUG

// Defining main() as a macro
#define MAIN int main() {\
	std::cout << "Hello World" << std::endl;\
}\


int main() {

	std::cout << HI << std::endl; // We can use something simple as this

	LOG("Hello"); // We can use macros with arguments
	LOG(56);
	LOG(5.5f);

	LOG2("HELLO WORLD!!!!");
}