#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>
#include <iostream>


void myInvoke(const std::function<void()>& fn)
{
    fn();
}

namespace ns{
  void func12(int a){
    std::cout << "ns12" <<std::endl;
  }
}

void func12(int a){
    std::cout << "12" <<std::endl;
  }

int main(){
  using ns::func12;

  func12(14);

}

