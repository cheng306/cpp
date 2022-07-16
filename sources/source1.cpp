#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>




std::vector<int> veccc{1,2,3};

void func1(int a){
  std::cout << "here" <<std::endl;
}


template <typename T, typename U>
bool max(T t, U u){
  return t>u;
}



int main(){


  const char* a = "abc";
  const auto b = a;
  std::cout << b[1] <<std::endl;

  int aa = 12;
  int bb = aa;
  std::cout << &aa << std::endl;
  std::cout << &bb << std::endl;
  std::cout << max(7.5, 4.5) <<std::endl;
}

