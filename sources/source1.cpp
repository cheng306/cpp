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
  int a {13};
};

typedef struct ClassA* ClassAStar;

typedef ClassA* ClassAStar2;


class A {
public:
  int intA = 12;
};
  
class B : public virtual A {
};
  
class C : public virtual A {
};
  
class D : public B, public C {
};


  

bool intReturnTrue(int a){
  return true;
}

bool intReturnFalse(int a){
  return false;
}


void refInt(int& in){
  std::cout << in <<std::endl;
}



 int foo(){return 0;};

 enum class tiny : bool {
    one, two 
};




int main(){

  tiny a = tiny::one;
  std::cout<<  (a == true) << std::endl;
  


}

