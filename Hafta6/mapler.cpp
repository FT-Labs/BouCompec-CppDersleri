#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

#define MP make_pair


int main()
{
	map<int,int> mp;

	/*pair<const char*,int> p = {"mehmet",30};
	p = mp("mehmet",30);

	cout << p.first << ' ' << p.second << endl;*/

	for(int i=0;i<10;++i)
	{
		if(mp.count(i))
			mp[i]++;
		else
			mp.insert(MP(i,i));
	}

	for(int i=0;i<10;++i)
	{
		if(mp.count(i))
			mp[i]++;
		else
			mp.insert(MP(i,i));
	}

	for(auto it : mp)
	{
		cout << "Anahtar:" << it.first << ' ' << "Deger:" << it.second << endl;
	}

	return 0;
}
