
#include <iostream>
#include <vector>
#include <numeric>
#include <string_view>
#include <string>
#include "Derived.hpp"
#include <array>
#include <algorithm>
#include <atomic>
#include <atomic>

#include "Auto_ptr2.hpp"
#include <boost/lambda/lambda.hpp>
#include <boost/atomic.hpp>

class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    
    ~Resource() { std::cout << "Resource destroyed\n"; }
//private:
    Resource(const Resource& r){ std::cout << "Copy Resource acquired\n" <<std::endl;}
};

auto makeWalrus(const std::string& name)
{
  // Capture name by reference and return the lambda.
  return [&]() {
    std::cout << "I am a walrus, my name is " << name << '\n'; // Undefined behavior
  };
}

class DeepDerived: public Derived{
  void method1(){
    std::cout << "in DeepDerived"<< std::endl;
  }
};

void func1(SampleClass sc){

}

class Base2
{
public:
	// This version of getThis() returns a pointer to a Base class
	virtual Base2* getThis() { std::cout << "called Base2::getThis()\n"; printType2(); return this; }
   void printType() { std::cout << "returned a Basee\n"; }
  void printType2() { std::cout << "Base printType2\n"; }


};
 
class Derived2 : public Base2
{
public:
	// Normally override functions have to return objects of the same type as the base function
	// However, because Derived is derived from Base, it's okay to return Derived* instead of Base*
	Derived2* getThis() override { std::cout << "called Derived2::getThis()\n"; printType2(); return this; }
	void printType() { std::cout << "returned a Derived2\n"; }
  void printType2() { std::cout << "Derived printType2\n"; }
};



int main(){


  Base b;



}