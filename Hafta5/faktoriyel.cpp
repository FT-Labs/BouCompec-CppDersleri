#include <iostream>
using namespace std;

void faktoriyel(int n)
{
	int x = 1;

	for(int i=1;i<n+1;++i)
	{
		x *= i;
	}

	cout << x << endl;
}

int faktoriyelRecursion(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*faktoriyelRecursion(n-1);
	}
}

//Fibonacci Serisi: 1,1,2,3,5,8

int fibonacciToplami(int kosul)
{
	if(kosul == 0)
		return 0;
	else if(kosul == 1)
		return 1;
	else
		return fibonacciToplami(kosul-1)+fibonacciToplami(kosul-2);
}

//1 den n e kadar olan sayilarin toplamini recursionla yazdirin

int toplam(int n)
{
	if( n==1 )
	{
		return 1;
	}
	else
	{
		return n+toplam(n-1);
	}
}


int main()
{
	cout << "Faktoriyelinin bulunmasini istediginiz sayiyi girin." << endl;

	int n;
	cin >> n;

	/*faktoriyel(n);

	cout << faktoriyelRecursion(n) << endl;*/

	cout << fibonacciToplami(n) << endl;

	cout << toplam(n) << endl;


	return 0;
}
