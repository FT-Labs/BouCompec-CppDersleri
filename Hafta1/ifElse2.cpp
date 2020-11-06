#include <iostream>
using namespace std;


int x = 5;

int main()
{
	int x = 6;

	if(1)
	{
		int x = 7;
		cout << ::x << endl;
	}

	return 0;
}
