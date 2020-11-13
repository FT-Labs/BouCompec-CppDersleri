#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};

	//Arrayin sizeini asla kendinden buyuk girmeyin
	/*cout << arr[1] << endl;

	for(int i=0;i<5;++i)
		cout << arr[i] << ' ';*/


	cout << sizeof(arr)/sizeof(arr[0]) << endl;

	float farr[3];

	cout << "3 tane float eleman girin" << endl;


	//Arraylere yeni eleman ekleyemezsiniz
	for(int i=0;i<3;++i)
	{
		/*float y;
		cin >> y;
		farr[i] = y;*/
		//Kisa yol
		cin >> farr[i];
	}


	for(int i=0;i<3;++i)
		cout << farr[i] << ' ';


	return 0;
}
