#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "Base.hpp"
#include "SampleClass.hpp"

class Derived: public Base{

public:
    int b;
    SampleClass sc;
    Derived();
    Derived(SampleClass scc);
    Derived(const Derived&);

    void method1();
    void method1() const;
    void method2();

    std::string str;


    std::string& getStr(){
        return str;
    }
    
};

#endif