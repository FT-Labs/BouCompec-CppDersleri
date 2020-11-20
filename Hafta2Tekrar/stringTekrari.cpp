/*
Author: PhysTech
Fri Nov 20 20:26:47 2020
*/
//#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s = "C++";

	const char* s1 = "C++";

	cout << s1 << endl;

	char s2[] = {'C','+','+',0};

	//Size fonksiyonu eleman sayisini vermez, byte olarak hafiza buyuklugunu verir
	cout << s.size() << endl;

	cout << strlen(s1);

	cout << s2 << endl;
	s2[0] = 'c';
	cout << s2 << endl;

	cout << strlen(s2) << endl;

	printf("Hello World!");


	return 0;
}
