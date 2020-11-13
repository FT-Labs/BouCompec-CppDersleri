#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	cout << &x << endl;

	int* y = &x;

	*y = 15;

	cout << x << endl;

	return 0;
}
