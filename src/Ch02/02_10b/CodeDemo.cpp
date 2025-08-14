// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45;
    sprite_x = target_x;
    player_x = sprite_x;

    std::cout << "target_x float: " << target_x << std::endl;
    std::cout << "sprite_x int32: " << sprite_x << std::endl;
    std::cout << "player_x unsigned 32: " << player_x << std::endl;
    std::cout << "player_x int32: " << static_cast<int32_t>(player_x) << std::endl;
    std::cout << "player_x float: " << static_cast<float>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
