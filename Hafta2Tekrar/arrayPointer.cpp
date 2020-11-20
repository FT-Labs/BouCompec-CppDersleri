/*
Author: PhysTech
Fri Nov 20 20:22:37 2020
*/

#include <iostream>
using namespace std;

void arrayElemaniDegis(int arr[])
{
	arr[0] = 12;

}


int main()
{
	int arr[] = {1,2,3};

	cout << arr[0] << endl;

	arrayElemaniDegis(arr);

	cout << arr[0] << endl;

	cout << sizeof(arr)/sizeof(arr[0]) << endl;




	return 0;
}
