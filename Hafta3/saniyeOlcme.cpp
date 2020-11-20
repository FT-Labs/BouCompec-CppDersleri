#include <time.h>
#include <iostream>
using namespace std;


int main()
{

	clock_t suankiZaman = clock();
	static int arr[50000][50000];
	for(int i=0;i<50000;i++)
		for(int j=0;j<50000;j++)
			arr[i][j] = i+j;

	cout << (float)(clock()-suankiZaman)/CLOCKS_PER_SEC;

	return 0;

}
