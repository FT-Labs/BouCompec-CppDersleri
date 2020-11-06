#include <iostream>
using namespace std;


int main()
{
	int x,y;
//	int x=5,y=78;

	cin >> x >> y;

	/*cout << x << endl;
	cout << y << endl;*/


	//Eger if'in icinde degisken olusturacaksaniz degiskeni ifin disinda tanimlayin.
	int buyukSayi;

	if (x > y)
	{
		cout << "Buyuk olan sayi:" << x << endl;
		buyukSayi = x;
	}
	else if (y > x)
	{
		cout << "Buyuk olan sayi:" << y << endl;
		buyukSayi = y;
	}
	else
	{
		cout << "Iki sayi birbirine esittir:" << x << endl;
	}

	cout << buyukSayi << endl;

	return 0;

}
