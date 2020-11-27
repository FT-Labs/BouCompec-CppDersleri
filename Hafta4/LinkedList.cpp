#include <iostream>
using namespace std;


struct Node
{
	int data;
	Node* next;

	~Node()
	{
		cout << "Bir node yok edildi." << endl;
	}
};

void staticVariables()
{
	static int x = 0;
	x++;
	x = 0;
	cout << x << endl;
}

int main()
{
	staticVariables();
	staticVariables();



	return 0;
}
