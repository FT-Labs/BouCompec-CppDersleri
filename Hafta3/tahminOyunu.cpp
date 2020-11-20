#include <iostream>
using namespace std;





int main()
{
	/*Kucuk Sinir = min
	Buyuk Sinir = max
	Bilgisayarin Ilk Tahmini = (min+max)/2
	Mesela ben 1790 dusundum
	Bilgisayar 5000 dedi
	Islemler:
	max = pcTahmini
	min = min
	Tam tersi icin
	min = pcTahmini
	max = max*/

	cout << "Bilgisayarin Tahmin Oyununa Hosgeldiniz!!!" << endl;
	cout << "1 ile 10 bin arasinda bir sayi dusunun." << endl;

	int pcTahmini = 5000;
	int mn = 0,mx = 10000;
	while(true)
	{
		cout << "Yaptigim tahmin: " << pcTahmini << endl;
		cout << "Sayiniz daha buyuk ise + girin, daha kucuk ise - girin, eger dogruse ise q'ya basin." << endl;
		char ch;
		cin >> ch;
		if(ch == 'q')
		{
			cout <<"Programdan cikiliyor... Oynadiniz icin tesekkur ederim" << endl;
			break;
		}
		else if(ch == '+')
		{
			mn = pcTahmini;
			pcTahmini = (mn+mx)/2;
		}
		else
		{
			mx = pcTahmini;
			pcTahmini = (mx+mn)/2;
		}

	}

	return 0;
}
