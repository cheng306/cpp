
#include <iostream>
#include <vector>
#include <numeric>
#include <string_view>
#include "Derived.hpp"
#include <array>
#include <algorithm>
#include <atomic>

#include "Auto_ptr2.hpp"

class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

Auto_ptr2<Resource> func1(){
  Auto_ptr2<Resource> auto_ptr{new Resource};
  std::cout<<"here1"<<std::endl;
  Auto_ptr2<Resource> auto_ptr2 = auto_ptr;
  std::cout<<"here2"<<std::endl;
  return auto_ptr2;
}

int main(){
  // Auto_ptr2<Resource> auto_ptr0;
  // Auto_ptr2<Resource> auto_ptr{new Resource};
  // auto_ptr0 = std::move(auto_ptr);
  // std::cout<<"here3"<<std::endl;

  std::atomic<bool> atomic_bool{true};
  //atomic_bool = false;
  std::cout<<atomic_bool<<std::endl;


  return 0;


    
}