#ifndef DERIVED_HPP
#define DERIVED_HPP

#include "Base.hpp"
#include "SampleClass.hpp"

class Derived: public Base{

private:
    using Base::baseInt;

public:
    static const int staticInt = 12;
    inline static const std::string staticStr="adf";
    int b;
    SampleClass sc;
    Derived(int);
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