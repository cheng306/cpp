
#include <iostream>
#include <vector>
#include <numeric>
#include <string_view>
#include <string>
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
//private:
    Resource(const Resource& r){ std::cout << "Copy Resource acquired\n" <<std::endl;}
};




int main(){
  try{
    try{
      Derived bb{};
      throw bb;
    }catch(const Base& bb){
      //std::cout<<bb.a<<std::endl;
      throw;
    }

  }catch(const Base& bb){
    bb.method1();
  }
  
    
}