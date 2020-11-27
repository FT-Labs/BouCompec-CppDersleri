#include <iostream>
using namespace std;



int main()
{
	int x;
	cout << "Lutfen Yasinizi girin." << endl;
	cin >> x;

	switch(x)
	{
		case 16:
			cout << "Artik ailen yanindayken araba surebilirsin." << endl;
			break;
		case 18:
			cout << "Artik tek basina araba surebilirsin." << endl;
			break;
		case 21:
			cout << "Artik alkol alabilecek yastasin." << endl;
			break;
		default:
			cout << "16,18 yada 21 yasinda degilsiniz." << endl;
	}

	return 0;
}
