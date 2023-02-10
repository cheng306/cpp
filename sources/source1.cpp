#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>
#include <iostream>

#include <chrono>
#include <thread>
#include <mutex>


void myFunction() {
    std::cout << "Hello World!" << std::endl;
}

int main() {
    int number = 42;
    int* pNumber = &number;
    int** ppNumber = &pNumber;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value of pNumber: " << pNumber << std::endl;
    std::cout << "Address of pNumber: " << &pNumber << std::endl;
    std::cout << "Value of ppNumber: " << ppNumber << std::endl;
    std::cout << "Address of ppNumber: " << &ppNumber << std::endl;
    std::cout << "Value stored at the location pointed to by pNumber: " << *pNumber << std::endl;
    std::cout << "Value stored at the location pointed to by ppNumber: " << *ppNumber << std::endl;
    std::cout << "Value stored at the location pointed to by the location pointed to by ppNumber: " << **ppNumber << std::endl;

    return 0;

}
