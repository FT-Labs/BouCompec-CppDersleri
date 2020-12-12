#include <iostream>
using namespace std;

#define cstring const char*



class Ogrenci
{
private:
	int yas;
	cstring okul;
	cstring bolum;
public:
	Ogrenci(int yas,cstring okul,cstring bolum):
		yas(yas),okul(okul),bolum(bolum)
	{}

	void setOkul(cstring okul)
	{
		this->okul = okul;
	}

	cstring getOkul()
	{
		return okul;
	}

	int getYas()
	{
		return yas;
	}

	void setYas(int yas)
	{
		this->yas = yas;
	}

	void setBolum(cstring bolum)
	{
		this->bolum = bolum;
	}

	cstring getBolum()
	{
		return bolum;
	}

};
