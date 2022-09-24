#include "../headers/header.hpp"
#include <functional>

#include <cstdarg>
#include <vector>
#include <iostream>




std::vector<int> veccc{1,2,3};

void func1(int a){
  std::cout << "here" <<std::endl;
}


template <typename T, typename U>
bool max(T t, U u){
  return t>u;
}


struct IntPair
{
public:
	int m_first{};
	int m_second{};

	void set(int first, int second)
	{
		m_first = first;
		m_second = second;
	}
	void print()
	{
		std::cout << "Pair(" << m_first << ", " << m_second << ")\n";
	}
};

int adder(int, int);

int main(){


  std::cout << adder(3,5) <<std::endl;



}

