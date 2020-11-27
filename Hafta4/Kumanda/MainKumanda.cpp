#include "Kumanda.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	Kumanda kumanda = Kumanda(0,vector<string>{"Cine 5","Atv"},"Cine 5",0);


	while(true)
	{
		cout << "Kumandaya hosgeldiniz.... Lutfen alttaki islemlerden birini secin." << endl;
		cout << "1-Tv Ac" << endl << "2-Tv Kapa" << endl;
		cout << "(+)-Ses seviyesini arttir" << endl;
		cout << "(-)-Ses seviyesini azalt" << endl;
		cout << "3-Kanal Sec" << endl;
		cout << "4-Guncel Kanali Yazdir" << endl;
		cout << "5-Guncel tum bilgileri bastir" << endl;
		cout << "6-Kanal Ekle" << endl;
		cout << "Cikis icin lutfen 'q'ya basin!" << endl;
		char islem;
		cin >> islem;

		switch(islem)
		{
			case 'q':
				goto lbl;
				break;
			case '1':
				kumanda.tvAc();
				break;
			case '2':
				kumanda.tvKapa();
				break;
			case '+':
				kumanda.sesDegis('+');
				break;
			case '-':
				kumanda.sesDegis('-');
				break;
			case '3':
				kumanda.kanalSec();
				break;
			case '4':
				cout << kumanda.getGuncelKanal() << endl;
				break;
			case '5':
				cout << kumanda;
				break;
			case '6':
				string s;
				cout << "Eklemek istediginiz kanalin ismini girin. " << endl;
				cin >> s;
				kumanda.kanalEkle(s);
		}
	}

	lbl:
	return 0;
}
