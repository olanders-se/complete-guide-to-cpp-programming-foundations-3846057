// Complete Guide to C++ Programming Foundations
// Challenge 03_08
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    //result = ((double)a + (double)b + (double)c) / 3; 
    result = (a + b + c) / 3.0;
    return result;
}

int main(){
    int a = -12;
    int8_t b = 15;
    uint32_t c = 10;
    double learnerResult = my_average(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}