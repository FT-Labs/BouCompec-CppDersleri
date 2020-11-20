#include <iostream>
using namespace std;


class Personel
{
public:
	string isim;
	string soyismi;
	string calistigiAlan;

};

struct Personel1
{
	string isim;
	string soyismi;
	string calistigiAlan;
};





int main()
{
//	Personel arda = Personel();

	struct Personel1 arda;
	Personel1 arda1 = Personel1();

	arda.isim = "Arda";
	arda.soyismi = "Atci";
	arda.calistigiAlan = "Cs";

	cout << arda.isim << endl;
	cout << arda.soyismi << endl;
	cout << arda.calistigiAlan << endl;



	return 0;

}
