#include <iostream>

class SampleClass{
public:
    SampleClass(){
        std::cout<<"In SampleClass constructor"<<std::endl;
    }

    SampleClass(const SampleClass& sc){
        std::cout<<"In SampleClass copy constructor"<<std::endl;
    }
};