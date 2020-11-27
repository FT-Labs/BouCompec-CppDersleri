#include <iostream>
using namespace std;



int main()
{
	int* ptr;
	{
		int* x = new int;
		*x = 5;
		ptr = x;
		cout << *ptr << endl;
		cout << endl;
		cout << x << endl;
		cout << ptr << endl;
	}
	delete ptr;

	cout << *ptr << endl;



	return 0;
}

