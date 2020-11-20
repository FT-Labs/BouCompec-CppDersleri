#include <iostream>
using namespace std;

//Java stili
class Personel
{
	string isim;
	string soyIsim;
	string departman;

public:
	Personel(string a,string b,string c)
	{
		isim = a;
		soyIsim = b;
		departman = c;
	}

};

//Member initiliazer lists
class Personel1
{
	string isim;
	string soyIsim;
	string departman;
public:
	Personel1(string isim,string soyIsim,string departman)
	:isim(isim),soyIsim(soyIsim),departman(departman)
	{}


};


int main()
{
	Personel1 arda = Personel1("arda","atci","cs");

	return 0;
}
