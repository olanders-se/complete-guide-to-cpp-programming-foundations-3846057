// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
/*
int main()
{
    std::cout<< "Hi There!" << std::endl;
    std::cout<< std::endl << std::endl;
    return 0;

        float num_1, num_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    
    result = num_1 + num_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;

}
*/
int main()
{
    string yourName="";

    std::cout<< "What is your name?" << std::flush;
    std::cin >> yourName;
    std::cout<< "Your name is: " << yourName << std::endl;
    return 0;
}