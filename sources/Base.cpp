#include <iostream>
#include "Base.hpp"

//std::string Base::baseStr="asdf"; 


Base::Base(int a):a(a){
    std::cout<<"within Base constructor"<<std::endl;
}

Base::Base(const Base& base){
    std::cout<<"within Base copy constructor"<<std::endl;
}

Base::~Base(){
    std::cout<<"within Base destructor"<<std::endl;
}

int Base::getA() const{
    return a;
}

Base* Base::getThis(){
    return this;
}

void Base::method1(){
    std::cout<<"in Base method1"<<std::endl;
    this->method2();
}

void Base::method1() const{
    std::cout<<"in Base method1 const"<<std::endl;
}

void Base::method2(){
    std::cout<<"in Base method2"<<std::endl;
    
}

Base& Base::operator*(){
    return *this;

}







