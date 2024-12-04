// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define CAPACITY 5000

int main(){

    int32_t large = CAPACITY;
    uint8_t small = 37;
    large += small;
        
    std::cout << std::endl << std::endl;
    return (0);
}
