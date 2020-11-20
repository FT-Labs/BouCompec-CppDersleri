#include <chrono>
#include <thread>
#include <iostream>
using namespace std;
using namespace chrono;
using namespace this_thread;

void bilgisayariBeklet(int);

int main()
{
	int x = 5;
	cout << x << endl;
	cout << "Iki saniye durduruluyor..." << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << x << endl;

	bilgisayariBeklet(2);


	return 0;
}

void bilgisayariBeklet(int n)
{
	cout << "Iki saniye durduruluyor..." << endl;
	sleep_for(seconds(n));
	cout << "Program baslatiliyor.." << endl;
}


