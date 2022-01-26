#include <iostream>
#include <string>

namespace apple
{
	void print(const char* c)
	{
		std::cout << c << std::endl;
	}
}

namespace orange
{
	void print(const char* c)
	{
		std::string text = c;
		std::reverse(text.begin(), text.end());
		std::cout << text << std::endl;
	}
}

int main()
{
	apple::print("HEllo");
	orange::print("elloH");
}