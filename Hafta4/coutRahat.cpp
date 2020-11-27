#include <iostream>
#include "coutUtils.h"
#include <vector>

using namespace std;



int main()
{
	vector<int> vec = {1,2,3,4,5,6,7};
	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(15);

//	for(int i=0;i<vec.size();++i)
//		cout << vec[i] << ' ';

	vector< vector<int> > vec2d = {{1,2,3,4},
									{5,6,7,8,9},
									{10,11,12,13,14}};

	/*for(int i=0;i<vec2d.size();++i)
	{
		for(int j=0;j<vec2d[i].size();++j)
			cout << vec2d[i][j] << ' ';
		cout << endl;
	}*/

	cout << vec2d << endl;



	return 0;
}
