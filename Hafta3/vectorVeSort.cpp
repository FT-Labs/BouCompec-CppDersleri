#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
	vector<int> vec = {1,2,3};
	cout << vec[0] << endl;

	//Son eleman icin
	cout << vec.back() << endl;

	vec.push_back(4);
	cout << vec.back() << endl;

	vector<int>::iterator it = lower_bound(vec.begin(),vec.end(),2);

	cout << *it << endl;


	return 0;
}
