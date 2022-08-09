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


int main(){

  IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

}

