#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include "Kumanda.h"
using namespace this_thread;
using namespace chrono;


void Kumanda::tvAc()
{
	if(tvDurumu)
		cout << "Tv zaten acik..." << endl;
	else
	{
		cout << "Tv aciliyor...." << endl;
		tvDurumu = true;
	}
}

void Kumanda::tvKapa()
{
	if(!tvDurumu)
		cout << "Tv zaten kapali..." << endl;
	else
	{
		cout << "Tv kapatiliyor...." << endl;
		tvDurumu = false;
	}
}

void Kumanda::sesDegis(char ch)
{
	//+ ise arttir, - ise azalt

	if(ch == '-')
	{
		if(sesSeviyesi <= 0)
			cout << "Ses seviyesi 0'in altinda olamaz." << endl;
		else
		{
			sesSeviyesi--;
			cout << "Guncel Ses: " << sesSeviyesi << endl;
		}
	}
	else
	{
		if(sesSeviyesi>=10)
			cout << "Tv zaten maksimum ses seviyesinde..." << endl;
		else
		{
			sesSeviyesi++;
			cout << "Guncel Ses: " << sesSeviyesi << endl;
		}
	}
}


void Kumanda::kanalEkle(string eklenecekKanal)
{
	cout << "Kanal ekleniyor... Lutfen bekleyin" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	kanallar.push_back(eklenecekKanal);
}


void Kumanda::kanalSec()
{
	for(int i=0;i<kanallar.size();++i)
	{
		cout << i << '-' << kanallar[i] << endl;
	}
	cout << "Secmek istediginiz kanalin numarasini girin." << endl;
	int x;
	cin >> x;
	guncelKanal = kanallar[x];
	cout << "Kanal basariyla degistirildi..." << endl;
}

ostream& operator<<(ostream& out,const Kumanda& km)
{
	out << "KUMANDA PROGRAMINA HOSGELDINIZ...." << endl;
	out << "==================================" << endl;
	out << "Tv Durumu: " << (km.tvDurumu ? "Acik" : "Kapali") << endl;
	out << "Ses Seviyesi: " << km.sesSeviyesi << endl;
	out << "Suanki Kanal: " << km.guncelKanal << endl;
	for(int i=0;i<km.kanallar.size();++i)
	{
		out << km.kanallar[i] << ' ';
	}
	out << endl;
	cout << "=================================" << endl;
	return out;
}







