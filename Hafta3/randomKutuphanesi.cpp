#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	//Seed srand()->seed rand()
	//Seedin anlami ise: Bana kullanilacak formullerden bir sayi soyle

	srand(2);

	for(int i=0;i<10;++i)
		cout << rand()%3 << endl;

	return 0;
}
