/*

For Loop Syntax
for (initializer ; condition ; increment / decrement) 
    statement / code_block

While Loop Syntax
while (condition) 
    statement / code_block

Do While Loop Syntax
do
    statement / code_block
while (condition)

*/
#include <iostream>

int main()
{
    // For Loop / Hello World x5
    for (int i = 0; i < 5; i++) {
        std::cout << "Hello World!" << std::endl;
    }

    std::cout << std::endl;

    // While Loop / Hello World x5
    int i = 0;
    while (i < 5) {
        std::cout << "Hello World!" << std::endl;
        i++;
    }

    std::cout << std::endl;
    
    // Do While Loop / Hello World x5
    int j = 0;
    do {
        std::cout << "Hello Wordl!" << std::endl;
        j++;
    } while (j < 5);

    std::cout << std::endl;

    // Traversing array
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 0; i < (int)(sizeof(arr)/sizeof(arr[0])); i++) {
        std::cout << arr[i] << ", ";
    }

}

