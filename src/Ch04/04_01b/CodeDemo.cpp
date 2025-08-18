// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define Level_Count 4  // Without semicolon

int main(){
    const size_t Level_Count = 4;
    int enemies[Level_Count];
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    std::cout << "The game has 4 levels" << std::endl;
    std::cout << "Value in 1 level 1: " << enemies[0] << " enemies." << std::endl;
    std::cout << "Value in 2 level 2: " << enemies[1] << " enemies." << std::endl;
    std::cout << "Value in 3 level 3: " << enemies[2] << " enemies." << std::endl;
    std::cout << "Value in 4 level 4: " << enemies[3] << " enemies." << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "Level difficulties are set as follows:" << std::endl;
    std::cout << "Level 1: " << levelDifficulty[0] <<  std::endl;
    std::cout << "Level 2: " << levelDifficulty[1] <<  std::endl;
    std::cout << "Level 3: " << levelDifficulty[2] <<  std::endl;
    std::cout << "Level 4: " << levelDifficulty[3] <<  std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
