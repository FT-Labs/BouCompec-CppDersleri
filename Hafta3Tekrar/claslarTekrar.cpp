#include <iostream>


using namespace std;


class Personel
{
	private:
		int yas;
		string isim;
	public:
		Personel(int yas,string isim):yas(yas),isim(isim)
		{
		}
		string getIsim()
		{return isim;}
		int getYas()
		{return yas;}


};

struct PersonelStruct
{
	int yas;
	string isim;
};

int main()
{
	Personel arda = Personel(21,"arda");

	cout << arda.getIsim() << endl;




	return 0;
}
