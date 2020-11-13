#include <iostream>
#include <string>
using namespace std;


int main()
{
	//Mutable->Elemanlari degistirilebilir (C ve C++ a ozel)
	//Python,java,ruby vesaire dillerde stringlerin elemanlari degistirilemez
	string s = "C++";

	s[0] = 'A';
	s += "Python";

	cout << s << endl;

	return 0;
}
