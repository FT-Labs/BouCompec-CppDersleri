#include <iostream>
using namespace std;


int main()
{
	string s;
	cin >> s;

	//Amacimiz stringinde icinde kac tane c oldugunu saymak

	int cnt = 0;

	/*for(int i=0;i<s.size();++i)
	{
		if(s[i] == 'c')
			++cnt;
	}

	cout << "Girdiginiz stringin icinde c var\n" << cnt;*/

	for(int i=0;i<s.size();++i)
	{
		if(isupper(s[i]))
			++cnt;
	}

	cout << cnt << endl;



	return 0;
}
