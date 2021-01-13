#include <iostream>
#include <set>
using namespace std;



int main()
{
	//set ve map(Cpp icin) -> balanced binary tree (Arama yapmaya calisirsaniz elemena kadar for loopu cevirmeniz gerekir)
	// unordered_set ve unordered_map -> hashing teknigi (O(1) hashing oldugundan dolayi eleman ararsaniz cok hizli bulursunuz)

	set<int> s;

	for(int i=0;i<10;++i)
		s.insert(i);
	for(int i=0;i<10;++i)
		s.insert(i);

	for(auto it : s)
	{
		cout << it << ' ';
	}

	for(set<int>::iterator it=s.begin();it<s.end();it++)
	{
		cout << *it << endl;
	}

	// vector => {1,2,3,4},<VEKTORUN SONU>
	// vector.begin() 1 i gosterir
	// vector.end() <VEKTORUN SONU> gosterir


	if(s.count(5))
		cout << "ARADIGINIZ SAYI BULUNDU" << endl;

	return 0;
}
