#include <iostream>
using namespace std;


int main()
{
	int x;
	cin >> x;

	int y = x;

	/*while(y<x)
	{
		cout << y << ' ';
		y += 3; // y+=3 esittir y = y+3
	}*/

	while(x--)
	{
		cout << x << ' ';
	}

	cout << endl;


	while(--y)
	{
		cout << y << ' ';
	}



	return 0;
}
