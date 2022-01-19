#include <iostream>

struct Vector2
{
    int x, y;
};

int main()
{
    Vector2 vec = { 1, 2 };
    Vector2 vec2 = { 3, 4 };
    


    std::cout << vec.x << std::endl;
    std::cout << vec.y << std::endl;
    std::cout << vec2.x << std::endl;
    std::cout << vec2.y << std::endl;

}
