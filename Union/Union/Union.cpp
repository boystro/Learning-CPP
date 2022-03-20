/*
These are "like" stucts in C++ which can store different
data types together, BUT all the data in Union refer to 
the same memory location.
*/
#include <iostream>

struct Vector2
{
    int x, y;
};

struct Vector4
{
	union
	{
		// These both refer to the same memory location so, they can be accessed either way
		struct { int x, y, z, w; };
		struct { Vector2 a, b; };
	};
};

// std::cout for Vector2
std::ostream& operator<<(std::ostream& stream, const Vector2& vec)
{
	stream << vec.x << " , " << vec.y;
	return stream;
}


int main()
{
	Vector4 vec = { 10, 20, 30, 40 };

	std::cout << vec.a << std::endl; // Accessing as Vector2
	std::cout << vec.b << std::endl;
	std::cout << std::endl;
	
	vec.x = 50; // Accessing as Vector4
	std::cout << vec.a << std::endl;
	std::cout << vec.b << std::endl;
}
