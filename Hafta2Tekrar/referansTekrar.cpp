/*
Author: PhysTech
Fri Nov 20 20:11:39 2020
*/

#include <iostream>
using namespace std;


int main()
{
	int x = 5;
	int& xref = x;


	cout << xref << endl;
	cout << &xref << endl;

	int y = 3;
	xref = y;

	cout << &xref << endl;
	cout << &x << endl;





	return 0;
}
