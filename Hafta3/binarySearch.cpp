#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int arr[] = {1,3,5,6,7,11,13,15,18};

	//Arrayde bir sayi aramaya for loopuyla calisirsaniz O(n) zaman harcarsiniz.
	//Binary searchle yapmaya calisirsaniz O(log(n))

	int bulunmasiGereken = 13;

	int minIndex = 0;
	int maxIndex = 8;

	int suankiIndex = (minIndex+maxIndex)/2;
	while(arr[suankiIndex] != bulunmasiGereken)
	{
		suankiIndex = minIndex+(maxIndex-minIndex)/2;


		if(arr[suankiIndex]<bulunmasiGereken)
		{
			minIndex = suankiIndex+1;
		}
		else if(arr[suankiIndex] > bulunmasiGereken)
		{
			maxIndex = suankiIndex-1;
		}

	}
	cout << arr[suankiIndex] << endl;

	//0 yada 1 doner, elemanin icinde bulunup bulunmadigini soyler
	cout << binary_search(arr,arr+8,13);

	return 0;

}
