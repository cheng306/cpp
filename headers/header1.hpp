#ifndef HEADER1
#define HEADER1

#include "header.hpp"

void constReference(int const& a){
    std::cout<<a<<std::endl;
}

int add(int& x, int& y){
    return x+y;
}



#endif