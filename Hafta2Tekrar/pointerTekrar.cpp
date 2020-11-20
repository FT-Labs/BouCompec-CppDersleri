#include <iostream>
using namespace std;


int main()
{
	int x = 5;
	int* xptr = &x;

	cout << &x << endl;
	cout << xptr << endl;

	int arr[] = {1,2,3};

	cout << arr << endl;

	int* arrptr = arr;

	cout << arrptr << endl;
	++arrptr;
	cout << arrptr << endl;
	++arrptr;
	cout << arrptr << endl;

	return 0;
}
