#include <iostream>
#include "Base.hpp"


Base::Base(int a):a(a){
    std::cout<<"within Base constructor"<<std::endl;
}

int Base::getA() const{
    return a;
}



