#ifndef HEADER
#define HEADER

#include <iostream>
#include <string>
static int sInt2 = 2;


static void repeatedFunc(){
    //
}

struct ClassB{
    void func1();
};


static void doSomething()
{
  static int value=1;
  value++;
  std::cout << value <<std::endl;
}


void doSomething1();



 
#endif


