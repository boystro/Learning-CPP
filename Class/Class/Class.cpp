/*
IN C++
There only difference (technically) between structs and classes is that
in struct the default variable setting is public
but in classes it is private.
Ignoring this fact, they are exactly the same thing.

In this file we will make a full class / object in C++
*/
#include <iostream>

struct Vector2 {
private:
	int x, y;

	// friend will allow the function to use private variables / methods
	friend std::ostream& operator<<(std::ostream& stream, Vector2& vec);

public:
	// Constructors // These are as soon as the object is created
	// these functions don't have a return type
	// the coma seperated statements after the Function name
	// is the initialisation list.
	// In this case there is overlaod of 3 Constructors

	Vector2() : x(0), y(0) {} // This gets called when we initialise without any value
	Vector2(int x, int y) : x(x), y(y) {} // This gets called when value is passed
	Vector2(const Vector2& vec) : x(vec.x), y(vec.y) {} // This gets called when we copy, or make the object from another object
	
	// Methods // These are basically functions but are called methods as they are part of a class / struct
	int getX() const {
		return x;
	}

	int getY() const {
		return y;
	}

	void updateX(int xa) { x = xa; }
	void updateY(int ya) { y = ya; }

	void update(int xa, int ya) {
		x = xa;
		y = ya;
	}

	// Operator Overload
	// This enables us to do Vector2 + Vector2 operations
	Vector2 operator+(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator-(const Vector2& other) const {
		return Vector2(x - other.x, y - other.y);
	}

	// Destructor // This gets called when the object is destroyed
	~Vector2() {}

};

class Player {
private:
	Vector2 m_position;
	std::string m_name;

	friend std::ostream& operator<<(std::ostream& stream, Player& p);

public:
	
	Player(std::string name, Vector2 pos) {
		m_name = name;
		m_position = pos;
	}

	void updatePosition(int x, int y) {
		m_position.update(x, y);
	}

	void updatePosition(Vector2 vec) {
		m_position.update(vec.getX(), vec.getY());
	}


};

// Overload of std::cout 
// This will enable us to write line like
// std::cout << <Vector2> ;
// This function is a friend and can access private variables
std::ostream& operator<<(std::ostream& stream, Vector2& vec) {
	stream << "( " << vec.x << ", " << vec.y << " )";
	return stream;
}
std::ostream& operator<<(std::ostream& stream, Player& p) {
	stream << p.m_name << " at " << p.m_position;
	return stream;
}
int main()
{
	Vector2 vec1(1, 2);

	Player p("indranil", vec1);
	std::cout << p << std::endl;

	p.updatePosition(5, 6);

	std::cout << p << std::endl;

	auto vec2 = (vec1 + Vector2(6, 7));
	std::cout << vec2 << std::endl;

}
