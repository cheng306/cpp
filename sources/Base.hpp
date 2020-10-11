#ifndef BASE_HPP
#define BASE_HPP

class Base{
public:
    int a;
    Base(int=12);
    Base(const Base&);


    int getA() const;

    void notImplementMethod() const;

    virtual void method1();

    virtual void method1() const;

    typedef int BaseInt;
};

#endif