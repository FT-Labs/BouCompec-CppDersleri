#include <iostream>
using namespace std;


int main()
{
	/*int x,y;
	cin >> x>> y;

	if(x>y)
		cout << x << endl;
	else if(y>x)
		cout << y << endl;
	else
		cout << "Iki sayida birbirine esittir." << endl;*/


	//  \0 ozel bir karakterdir, null karakteridir.
	if('\0')
		cout << "Kod blogu calisti." << endl;

	if(0.000000000000000000000000)
		cout << "Kod blogu calisti." << endl;
	//0 disindaki tum sayilar if loopundan gecer.

	int x=1,y=1,z=1;

	if(x==y)
		cout << "Iki sayi birbirine esittir" << endl;

	if(!0)
		cout << "Kod blogu calisti" << endl;

	// iki tane ampersant(&&)-> ve anlamina gelir.
	// iki tane pipe,cubuk(||)-> veya anlamina gelir.
	/*if(x==y && y==z)
		cout << "3 sayida birbirine esittir." << endl;

	int a=1,b=3,c=1;*/

	//a ve b -> 0 dondu
	//veya
	//a ve c -> 1 dondu
	//0 veya 1
	/*if(a==b || a==c)
		cout << "3 sayidan ikisi birbirine esittir." << endl;*/

	//boolean degiskenler sadece (true , false) degerlerini alirlar.

	int m=1,n=1;

	bool dogrumu = m!=n;

	if (dogrumu)
		cout << "true";
	else
		cout << "false";









	return 0;
}
