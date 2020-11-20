/*
Author: PhysTech
Fri Nov 20 20:18:36 2020
*/

#include <iostream>
using namespace std;

void degis(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void degis(int* a,int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
	int x = 3,y = 5;

	degis(x,y);

	cout << x << endl;
	cout << y << endl;

	degis(&x,&y);

	cout << x << endl;
	cout << y << endl;



	return 0;
}

