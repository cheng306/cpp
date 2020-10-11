#include <iostream>
#include "Base.hpp"

Base::Base(int a):a(a){
    std::cout<<"within Base constructor"<<std::endl;
}

Base::Base(const Base& base){
    std::cout<<"within Base copy constructor"<<std::endl;
}

int Base::getA() const{
    return a;
}

void Base::method1(){
    std::cout<<"in Base method1"<<std::endl;
}

void Base::method1() const{
    std::cout<<"in Base method1 const"<<std::endl;
}



