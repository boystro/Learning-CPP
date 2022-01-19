/*
When we need to store same kind of data, but a lot of them
it is good to use arrays, instead of variables.

Eg - Numbers from 1 to 10


*/
#include <iostream>

int main()
{
    // Ways to declare an array

    int arr1[5]; // array with 5 elements
    int arr2[5] = { 1, 2, 3, 4, 5 }; // array with 5 elements initialised
    int arr3[] = { 1, 2, 3, 4, 5 }; // array with initialised elements / auto size
    int* arr4 = new int[5]; // Heap allocation of array with 5 elements

    // Adding array elements
    // accessing array elements
    // array index start with 0
    
    arr1[0] = 5;
    arr1[1] = 4;
    arr1[2] = 3;
    arr1[3] = 2;
    arr1[4] = 1;

    std::cout << arr1[0] << ", " << arr1[1] << ", " << arr1[2] << std::endl;



    // Changing array elements

    std::cout << arr2[3] << std::endl;
    arr2[3] = 5;
    std::cout << arr2[3] << std::endl;
}