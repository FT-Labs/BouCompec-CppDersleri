#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	cout << "Lutfen isminiz ve soyisminizi girin." << endl;
	string isim,soyisim;
	cin >> isim >> soyisim;

	for(int i=0;i<isim.size();++i)
	{
		if(i==0)
			isim[i] = toupper(isim[i]);
		else
			isim[i] = tolower(isim[i]);
	}
	for(int i=0;i<soyisim.size();++i)
	{
		if(i==0)
			soyisim[i] = toupper(soyisim[i]);
		else
			soyisim[i] = tolower(soyisim[i]);
	}

	cout << "Veritabanindaki kullanici adiniz ve soyadiniz:\n";

	cout << isim << ' ' << soyisim << endl;

	return 0;
}
