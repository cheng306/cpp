//#include <iostream> // std::cout, std::endl
#include "sum.h" // sumI, sumF
#include "print.hpp"

void printSum(int a, int b) {
    //std::cout << a << " + " << b << " = " << sumI(a, b) << std::endl;
    sumI(a, b);
}

void printSum(float a, float b) {
    //std::cout << a << " + " << b << " = " << sumF(a, b) << std::endl;
    sumF(a, b);
}

extern "C" void printSumInt(int a, int b) {
    printSum(a, b);
}

extern "C" void printSumFloat(float a, float b) {
    printSum(a, b);
}


int main(){

}