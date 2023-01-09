#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>
#include <iostream>

struct StructA{
  int a=1;
  int b;
} sta1;




int main(){
  std::cout << sta1.a << std::endl;
  StructA sta2;
  std::cout << sta1.b << std::endl;
}

