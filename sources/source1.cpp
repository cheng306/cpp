#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>

struct X
{
    const static int n = 1;
    const static int m{2}; // since C++11
    const static int k;
};
const int X::k = 3;

int func1(int);
int func1(std::string str);


int func1(char a){
  return a;
}
int main(){
  std::string str{"asdf"};
  func1(str);



}

