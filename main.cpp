#include <iostream>

template<int N>
class Factorial{
	public:
		static const int fact = (N * Factorial<N-1>::fact);
};

template<>
class Factorial<0>{
	public:
		static const int fact = 1;
};

int main(){
	std::cout << Factorial<5>::fact << std::endl;	
	return 0;
}