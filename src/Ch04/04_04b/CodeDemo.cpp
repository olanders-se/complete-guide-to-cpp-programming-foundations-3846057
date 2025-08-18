// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    //TimePoint start, end;
    TimePoint *start, *end; // Ändrat till pointer
    // std::chrono::time_point<std::chrono::system_clock> start, end;
    //Duration elapsed_seconds;
    Duration *elapsed_seconds = new Duration;
    std::string input;

    //start = Clock::now();
    start = new TimePoint(Clock::now());

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    //elapsed_seconds = end - start;  Mellan adress platserna
    *elapsed_seconds = *end - *start;


    //std::cout << "Reaction time: " << elapsed_seconds.count() << "s" << std::endl;
    //std::cout << "Reaction time: " << (*elapsed_seconds).count() << "s" << std::endl;
    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;

    //Delete the operator to avoid memory leakage
    delete start;
    delete end;
    delete elapsed_seconds;

    
    std::cout << std::endl << std::endl;
    return 0;
}
