#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>
#include <iostream>






enum class Animals
{
    chicken, // 0
    dog, // 1
    cat, // 2
    elephant, // 3
    duck, // 4
    snake, // 5

    maxAnimals,
};

// Overload the unary + operator to convert Animals to the underlying type
// adapted from https://stackoverflow.com/a/42198760, thanks to Pixelchemist for the idea
constexpr double operator+(Animals a) noexcept
{
    return static_cast<std::underlying_type_t<Animals>>(a);
}



int main(){


  std::cout << +Animals::snake << '\n'; 
  double aa = 1.0;
  std::cout << aa << std::endl;



}

