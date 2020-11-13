#include <iostream>
using namespace std;


int main()
{
	int x = 5,y=10;

	int& xref = x;
	int* xptr = &x;

	//Referans degiskenleri sadece bir kere olusturulur
	//xref = &y;

	cout << x << endl;
	xref = 20;
	x = 10;
	cout << xref << endl;
	/*cout << *xptr << endl;
	xptr = &y;
	cout << *xptr << endl;*/





	return 0;
}
