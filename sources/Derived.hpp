#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "Base.hpp"
#include "SampleClass.hpp"

class Derived: public Base{

public:
    int b;
    //SampleClass sc;
    Derived();
    void method1() const;
    void method1();
    
};

#endif