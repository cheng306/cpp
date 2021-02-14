
#include <iostream>
#include <vector>
#include <numeric>
#include <string_view>
#include <string>
#include "Derived.hpp"
#include "Base.hpp"
#include <array>
#include <algorithm>
#include <atomic>
#include <atomic>
#include <gtest/gtest.h>

#include "Auto_ptr2.hpp"
#include <boost/lambda/lambda.hpp>
#include <boost/atomic.hpp>

class SubResource{
public:
    int a;
    SubResource(int a=0):a(a) {
      std::cout << "SubResource acquired\n";
    }
    
    ~SubResource() { std::cout << "SubResource destroyed\n"; }
};



class Resource
{

  SubResource* sub;


public:
    Resource(SubResource* sub =nullptr):sub(sub) {
      std::cout << "Resource acquired\n";
    }

    // Resource() {
    //   std::cout << "Resouce empty constructor\n";
    // }


    SubResource& operator*() const{
      std::cout << "here" << std::endl;
      return *(this->sub);
    }

    void operator=(Resource& res2){
      delete sub;
      sub = res2.sub;
      res2.sub = nullptr;
      std::cout<<"move operator"<<std::endl; 
    }
    
    ~Resource() { delete sub; }
//private:
    Resource(const Resource& r){ std::cout << "Copy Resource acquired\n" <<std::endl;}
};


class ResouceDerived: public Resource{
  public:

  ResouceDerived():Resource() {
    std::cout << "in ResouceDerived empty Constructor\n";
  }

  ~ResouceDerived(){
    std::cout << "in ResouceDerived destructor\n";
  }

};

void func1(int& a){
  std::cout<<"in func1 v1"<<std::endl;
}

void func1(int a){
  std::cout<<"in func1 v2"<<std::endl;
}


int main(){
  SubResource(12);
  SubResource sr{SubResource(12)};

  std::cout << "abc\rde" <<std::endl;






}

