
#include "Derived.hpp"
#include <iostream>

// Derived::Derived(int a, int b):b(b),Base(a){
//     std::cout<<"in Derived constructor"<<std::endl;
//     std::cout<<(this->a)<<std::endl;
//     std::cout<<this->b<<std::endl;

// }

Derived::Derived():Base(12){
    std::cout<<"in Derived constructor"<<std::endl;
}

Derived::Derived(const Derived& derived):Base(){
    std::cout<<"in Derived copy constructor"<<std::endl;
}

// void Derived::method1() const{
//     std::cout<<"in Derived method1 const"<<std::endl;
// }

void Derived::method1(){
    std::cout<<"in Derived method1"<<std::endl;
}

void Derived::method1() const{
    std::cout<<"in Derived method1 const"<<std::endl;
}

