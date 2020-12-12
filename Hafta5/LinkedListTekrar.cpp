#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int data):data(data){}
};

void printTraversal(Node* head)
{
	while(head!=NULL)
	{
		cout << head->data << ' ';
		head = head->next;
	}
}

void printReversed(Node* head)
{
	vector<int> v;
	while(head!=NULL)
	{
		v.push_back(head->data);
		head = head->next;
	}

	/*for(int i=v.size()-1;i>=0;--i)
		cout << v[i] << ' ';*/

	/*reverse(v.begin(),v.end());

	for(auto i : v)
		cout << i << ' ';

	vector<int>::iterator it  = v.begin();

	auto it1 = v.begin();

	cout << endl;

	for(it;it<v.end();++it)
	{
		cout << *it << ' ';
	}*/

	for(auto it=--v.end();it>=v.begin();--it)
		cout << *it << ' ';

	//1 2 3 4
	// v.begin() -> 1 elemanindan baslar
	// v.end() -> 4 ten sonraki elemanar
}




int main()
{
	Node* head = new Node(1);
	Node* second = new Node(2);
	Node* third = new Node(3);
	Node* fourth = new Node(4);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = nullptr;

	//printTraversal(head);

	printReversed(head);



	return 0;
}
