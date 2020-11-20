#include <iostream>
using namespace std;



//Garbage collector-> Sizin olusturdugunuz tum degiskenleri, classlari otomatik olarak hafizadan temizler
// {} Icinde olan her sey stack memory icinde yer alir
//
//
//

class Personel
{
public:
	string isim;
	~Personel()
	{
		cout << "Personel classi yok edildi." << endl;
	}
};


int main()
{

	Personel* prs;
	{
		Personel* prs1 = new Personel;
		(*prs1).isim = "Ayse";
		prs = prs1;


		cout << (*prs1).isim << endl;
	}

	delete prs;

	cout << "DNMDNM" << endl;

	return 0;
}

