// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array
    //int* scorePtr = &highScores[0];   Som ovan fast mer komplicerat

    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout << "Second high score: " << *(scorePtr + 1) << std::endl;  // Display the second high score using pointer

    std::cout << "Third high score: " << scorePtr[2] << std::endl;  // Display the second high score using pointer

    std::cout << std::endl << std::endl;
    return 0;
}
