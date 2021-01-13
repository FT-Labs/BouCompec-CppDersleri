#include <iostream>
using namespace std;


enum SILAHTIPI
{
	YOK=3,YUMRUK,BALTA,KILIC
};


int main()
{
	SILAHTIPI silah = YUMRUK;

	if(silah==4)
		cout << "SILAH 4e ESITTTIR" << endl;


	cout << silah << endl;


	return 0;


}
