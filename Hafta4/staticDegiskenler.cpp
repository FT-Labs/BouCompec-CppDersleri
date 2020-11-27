#include <iostream>
using namespace std;

static int x = 1;


void staticDegiskenler()
{
	static int x = 1;
	cout << x << endl;
	++x;
}


int main()
{
	staticDegiskenler();
	staticDegiskenler();
	cout << ::x << endl;


	return 0;

}
