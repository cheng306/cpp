#ifndef BASE_HPP
#define BASE_HPP

#include <string>

class Base{
public:
    int a;
    int baseInt;
    Base(int);
    Base(const Base&);

    ~Base();
    
    int getA() const;

    void notImplementMethod() const;

    virtual void method1();

    virtual void method1() const;

    void method2();

    typedef int BaseInt;

    Base* getThis();

    Base& operator*();

protected:

};



#endif