#include <iostream>
using namespace std;

void degistir(int &a,int &b);
void degistir(int* a,int* b);

int main()
{
	int x = 3;
	int y = 8;

	cout << x << ' ' << y << endl;

	degistir(x,y);

	cout << x << ' ' << y << endl;

	degistir(&x,&y);

	cout << x << ' ' << y << endl;

	/*int a = 5;
	int c = 4;
	int& b = a;
	b = &c;*/

	int a = 5;
	cout << "A'nin hafizadaki yeri:" << &a << endl;

	int c = 4;
	cout << "C'nin hafizadaki yeri:" << &c << endl;

	int* b = &a;
	cout << "B pointerinin suanki tuttugu hafiza adresi:" << b << endl;

	b = &c;
	cout << "B pointerinin suanki tuttugu hafiza adresi:" << b << endl;

	const char* s = "asdasd"; // \0
	char ar[] = {'a','b','\0'};

	cout << ar << endl;

	cout << &s[0] << endl;

	int ar1[] = {1,2,3};
	//pointer -> 12 hafizalik yer tut bana, 0

	int* ptr = ar1;

	cout << ptr << endl;
	cout << *ptr << endl;
	++ptr;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << *ar1 << endl;







	return 0;
}



void degistir(int &a,int &b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

void degistir(int* a,int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
