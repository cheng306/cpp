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

int main(){
  int* a = new int[2]{};
  int* b = new int[3];

  a[0] = 1;
  b[0] = 1;

  delete[] a;
  delete[] b;

}

