#include <iostream>
using namespace std;


int main()
{
	int x = 0;

	while(x)
	{
		cout << "Donguye girdi." << endl;
		--x;
	}

	do{
		cout << "Donguye girdi" << endl;
		--x;
	}while(x);

	return 0;
}
