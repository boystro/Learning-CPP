/*
continue - go to next iterations

break - get out of loop / get out of switch

return - get out of function with declared return type of function
*/

#include <iostream>

int main()
{
    int i = 0;
    while (true) {

        // Stop Loop when i == 20
        if (i == 20) {
            i++;
            break;
        }
        
        // Skip even numbers
        if (i % 2 == 0) {
            i++;
            continue;
        }

        // print the value of i
        std::cout << i << " ";
        i++;
    }

    return 0;

    // statement is not executed as it comes after a return statement
    std::cout << "Hello world!" << std::endl;
}
