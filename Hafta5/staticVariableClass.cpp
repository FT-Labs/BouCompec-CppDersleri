#include <iostream>
#include <vector>
using namespace std;

class Foo
{
public:
	static int x;

	Foo()
	{
		x++;
	}

};

class Bar : public Foo
{
public:

};


int Foo::x = 0;


int main()
{

	Foo foo = Foo();

	cout << foo.x << endl;

	vector<Foo> f;

	/*for(int i=0;i<5;++i)
	{
		Foo q = Foo();
		f.push_back(q);
	}*/

	Bar bar = Bar();





	cout << foo.x << endl;






	return 0;

}
