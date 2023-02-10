#include "../headers/header.hpp"

int test_interanl_linkage = 12;


void ClassB::func1(){
    
    std::cout << test_interanl_linkage <<std::endl;
}




void doSomething1(){
  sInt2++;
}

