// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    std::string yourName;     // String (text)

    std::cout<< "What is your name? " << std::flush;
    std::cin >> yourName;
    std::cout<< "Your name is: " << yourName << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}