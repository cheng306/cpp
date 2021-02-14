
#include "Derived.hpp"
#include <iostream>



Derived::Derived(int a):Base(a){
    std::cout<<"in Derived constructor"<<std::endl;
}

Derived::Derived(SampleClass sc):sc(sc), Base(12){
    std::cout<<"in Derived constructor with Sample Class"<<std::endl;
    b=14;
    a=12;
}

Derived::Derived(const Derived& derived):Base(12){
    std::cout<<"in Derived copy constructor"<<std::endl;
}





void Derived::method1(){
    std::cout<<"in Derived method1"<<std::endl;
    this->method2();
}

void Derived::method1() const{
    std::cout<<"in Derived method1 const"<<std::endl;
}

void Derived::method2(){
    std::cout <<"in Derived method2"<<std::endl;  
}

//int Derived::staticInt=102;



