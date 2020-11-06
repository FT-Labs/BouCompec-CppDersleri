#include <iostream>
using namespace std;

void BirdenOnaKalansizBolunebilenIlkSayi()
{
	int cur = 10;

	while(1)
	{
		for(int i=2;i<11;++i)
		{
			if(cur%i != 0)
			{
				++cur;
				break;
			}
			else if(i == 10)
			{
				cout << cur << endl;
				return;
			}
		}
	}
}

int main()
{
	BirdenOnaKalansizBolunebilenIlkSayi();

	return 0;

}
