#include <iostream>
using namespace std;

void EnBuyukSayi(int x, int y, int z);


int BuyukSayi(int x,int y,int z)
{
	int buyukSayi = max(x,y);
	buyukSayi = max(buyukSayi,z);
	return buyukSayi;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;

	//Or icin : ||
	//And icin : &&


	/*if(x>=y && x>=z)
		enBuyukSayi = x;
	else if(y>=z && y>=x)
		enBuyukSayi = y;
	else if(z>=x && z>=y)
		enBuyukSayi = z;

	cout << enBuyukSayi << endl;*/

	EnBuyukSayi(x,y,z);

//	int enBuyukSayi = BuyukSayi(x,y,z);

///	cout << enBuyukSayi << endl;


	return 0;

}

void EnBuyukSayi(int a,int b,int c)
{
	int buyukSayi = max(a,b);
	buyukSayi = max(buyukSayi,c);
	cout << "En buyuk sayi:" << buyukSayi << endl;
}
