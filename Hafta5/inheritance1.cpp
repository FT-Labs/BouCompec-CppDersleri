#include <iostream>
using namespace std;



class Foo
{
public:

	virtual void printSomething()
	{
		cout << "Foo" << endl;
	}



	virtual int getSomething() = 0;

};

class Bar : public Foo
{
public:


	void printSomething()
	{
		cout << "Bar"<< endl;
	}

	int getSomething()
	{
		return 3;
	}

};

class BarBar : public Bar
{


};


//Ctrl+shift+esc basin
//Islemlere gidin
//Hafizayi ustten siralayin


class Foo1
{
public:
	static int x;

	Foo1()
	{
		x++;
	}



};


int Foo1::x = 0;

int main()
{
	/*Foo foo = Foo();
	foo.printSomething();

	Bar bar = Bar();

	bar.printSomething();
	bar.x = 5;*/

	static int ar[50000][50000];

	Bar bar = Bar();

	bar.printSomething();

	Foo* barptr = new Bar();

	bar.printSomething();
	barptr->printSomething();

	Foo* barbar = new BarBar();

	barbar->printSomething();

	Foo1 f = Foo1();


	cout << f.x << endl;







	return 0;
}
