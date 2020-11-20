#include <stdlib.h>
#include <iostream>
using namespace std;

string arr[] = {"Tas","Makas","Kagit"};

string bilgisayarHamlesi()
{
	srand(time(NULL));
	return arr[rand()%3];
}


int main()
{
	int kullaniciPuan = 0;
	int bilgisayarPuan = 0;

	while(kullaniciPuan!=3 && bilgisayarPuan!=3)
	{
		string cmp = bilgisayarHamlesi();
		cout << "Lutfen seciminizi yapin." << endl;
		string s;
		cin >> s;
		s[0] = toupper(s[0]);

		if(cmp == s)
			cout << "Beraberlik...Bilgisayar su hamleyi secmisti: " << cmp << endl;
		else if(cmp == "Tas" && s == "Kagit")
		{
			++kullaniciPuan;
			cout << "Kazandiniz! Bilgisayar su hamleyi secmisti: " << cmp << endl;
		}
		else if(cmp == "Makas" && s == "Tas")
		{
			++kullaniciPuan;
			cout << "Kazandiniz! Bilgisayar su hamleyi secmisti: " << cmp << endl;
		}
		else if(cmp == "Kagit" && s == "Makas")
		{
			++kullaniciPuan;
			cout << "Kazandiniz! Bilgisayar su hamleyi secmisti: " << cmp << endl;
		}
		else
		{
			++bilgisayarPuan;
			cout << "Kaybettiniz! Bilgisayar su hamleyi secmisti: " << cmp << endl;
		}
		cout << "==============" << endl << "GUNCEL DURUM" << endl << "===============" << endl;
		cout << "Kullanici Skoru: " << kullaniciPuan << ' ' << "Bilgisayar Skoru:" << bilgisayarPuan << endl;
	}

	/*if(kullaniciPuan == 3)
		cout << "Tebrikler! Oyunu kazandiniz." << endl;
	else
		cout << "Bilgisayar kazandi,uzgunum." << endl;*/

	//Ternary operator ? :

	cout << (kullaniciPuan == 3 ? "Tebrikler! Oyunu kazandiniz." : "Uzgunum, bilgisayar kazandi.");

	return 0;

}
