// Complete Guide to C++ Programming Foundations
// Challenge 02_13
// Data Types, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){
    int answer = 0;
    
    answer = (int)a + (int)b + (int)c;

    int result = answer;


    // Write your code here
    
    return result;
}

int main(){
    float a =  - 2.1;
    double b = - 3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
