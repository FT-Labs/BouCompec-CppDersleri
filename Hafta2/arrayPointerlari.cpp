#include <iostream>
using namespace std;


void arrayiYazdir(int n,int arr[])
{
	cout << sizeof(&arr) << endl;

	for(int i=0;i<n;++i)
		cout << arr[i] << ' ';
}


int main()
{
	int arr[] = {1,2,3};
	int* ptr = arr;

	cout << arr[0] << endl;
	//Bunun aynisi
	cout << *arr << endl;

	cout << arr << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;

	int n = sizeof(arr)/sizeof(arr[0]);
	arrayiYazdir(n,arr);




	return 0;
}
