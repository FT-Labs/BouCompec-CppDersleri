#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	// i=i+1 || i++,++i
	/*for(int i=0;i<x;++i)
	{
		cout << i << ' ';
	}*/

	int i;

	for(i=2;i<x;++i)
	{
		//% operatoru : kalana bakar
		if(i%3 == 2)
			cout << i << ' ';
	}

	return 0;
}
