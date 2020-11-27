#ifndef KUMANDA_H
#define KUMANDA_H 

#include <string>
#include <iostream>
#include <vector>
using namespace std;


class Kumanda
{
	bool tvDurumu;
	vector<string> kanallar;
	string guncelKanal;
	int sesSeviyesi;
public:
	Kumanda(bool tvDurumu,vector<string> kanallar,string guncelKanal,int sesSeviyesi):
	tvDurumu(tvDurumu),kanallar(kanallar),guncelKanal(guncelKanal),sesSeviyesi(sesSeviyesi){}
	
	void tvAc();
	void tvKapa();
	void kanalSec();
	vector<string> getKanallar() const {return kanallar;}
	string getGuncelKanal() const {return guncelKanal;}
	void kanalEkle(string eklenecekKanal);
	void sesDegis(char ch);
	friend ostream& operator<<(ostream& out,const Kumanda& km);
	
};


#endif /* KUMANDA_H */
