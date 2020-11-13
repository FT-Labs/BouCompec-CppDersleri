#define abcdhef }
#define abc {
#define Forn(i,L,R) for (int i = L; i < R; i++)
#define forn(n) for(int i=0;i<n;i++)
#include <iostream>



int main() abc
	std::cout << "Hello world" << std::endl;

	int x = 0;
	Forn(x,10,20)
	{
		std::cout << "Hi" << std::endl;
	}

	for(int i=10;i<20;++i)
		std::cout << "Hi" << std::endl;

	forn(10)
	{
		std::cout << "1" << std::endl;
	}


	return 0;

abcdhef
