#include <iostream> // The string data structure is present here
#include <string>   // But some important string methods are present here

int main()
{
	const char str1[] = "hello"; // Character array is basically string
	const char* str2 = "indranil";
	std::string str3 = "indranil"; // This is string

	// Some important string functions we can use
	std::string myStr = "Hello";
	std::cout << myStr << std::endl;

	myStr += "World"; // String concatenation
	std::cout << myStr << std::endl;

	std::cout << myStr[3] << std::endl; // using [] operator with string gives the character at the index

	std::cout << myStr.length() << std::endl; // Getting length of string

	std::cout << myStr.find("World") << std::endl; // Returns index where substring starts
}

