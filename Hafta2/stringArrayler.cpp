#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s = "Bogazici";
	const char* carr = "Bogazici";
	char charr[] = {'B','o','g','a','z','i','c','i',0};

	/*cout << s << endl;
	cout << carr << endl;

	int arr[] = {1,2,3};

	cout << arr << endl;
	cout << charr << endl;*/

	cout << s.size() << endl;
	cout << strlen(carr) << endl;


	return 0;
}
