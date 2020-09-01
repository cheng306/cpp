#include <iostream>

template <class T>
class Auto_ptr2{
    T* m_ptr;
public:
    Auto_ptr2(T* m_ptr=nullptr):m_ptr(m_ptr){
        std::cout<<"in Auto_ptr2 constructor"<<std::endl;
    }

    ~Auto_ptr2(){
        std::cout<<"in Auto_ptr2 destructor"<<std::endl;
        delete m_ptr;
    }

    Auto_ptr2(Auto_ptr2& a_ptr){
        std::cout<<"in Auto_ptr2 copy constructor"<<std::endl;
        m_ptr = a_ptr.m_ptr;
        a_ptr.m_ptr = nullptr;

    }

    Auto_ptr2& operator=( Auto_ptr2& a_ptr){
        std::cout<<"in Auto_ptr2 copy operator (take l-value refrerence)"<<std::endl;
        if (this==&a_ptr){
            return *this; 
        }

        delete m_ptr;
        m_ptr = a_ptr.m_ptr;
        a_ptr.m_ptr = nullptr;

        return *this;
    }

    Auto_ptr2& operator=(Auto_ptr2&& a_ptr){
        std::cout<<"in Auto_ptr2 copy operator (take r-value)"<<std::endl;
        if (this == &a_ptr){
            return *this;
        }
        delete m_ptr;
        m_ptr = a_ptr.m_ptr;
        a_ptr.m_ptr = nullptr;

        return *this;
    }


};