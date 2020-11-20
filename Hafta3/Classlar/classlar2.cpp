#include <iostream>
using namespace std;


class Personel
{
	string isim;
	string soyIsmi;
	string departman;
public:
	Personel(string isim,string soyIsmi,string departman):isim(isim),soyIsmi(soyIsmi),departman(departman)
	{}
	string getIsim() const
	{return isim;}
	string getSoyIsim() const
	{return soyIsmi;}
	string getDepartman() const
	{return departman;}

	void setDepartman(string dep)
	{departman = dep;}
};



int main()
{
	Personel ayse = Personel("ayse","ozdemir","bilgi islem");

	cout << ayse.getDepartman() << endl;

	ayse.setDepartman("muhasebe");

	cout << ayse.getDepartman() << endl;



	return 0;
}
