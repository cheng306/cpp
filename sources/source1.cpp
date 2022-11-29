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

struct ClassA{
  int a {};
};


struct Employee
{
    int id {};
    int age {};
    double wage {};
   

    Employee(int x, int y, double w):id(x), age(y), wage(w){
      std::cout << 1 <<std::endl;
    }

    Employee(int x, int y, double w){
      std::cout << 2 <<std::endl;
    }

};









int main(){


  ClassA clsA{1};
  Employee em{1,2,2.0};
  //std::cout << 1<< std::endl;
  ClassA classA;



}

