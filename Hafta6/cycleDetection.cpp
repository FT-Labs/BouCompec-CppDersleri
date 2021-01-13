#include <iostream>
#include <set>
using namespace std;


struct SinglyLinkedListNode
{
	int data;
	SinglyLinkedListNode* next;

	SinglyLinkedListNode(int data):data(data)
	{}
};

int operator<(SinglyLinkedListNode& first, SinglyLinkedListNode& second)
{
	return (first.data>second.data ? first.data : second.data);
}


bool has_cycle(SinglyLinkedListNode* head)
{
	set<SinglyLinkedListNode*> s;

	while(head!=NULL)
	{
		if (s.count(head))
		{
			return true;
		}


		s.insert(head);
		head = head->next;
	}

	return false;
}


int main()
{
	SinglyLinkedListNode* first = new SinglyLinkedListNode(1);
	SinglyLinkedListNode* second = new SinglyLinkedListNode(2);
	SinglyLinkedListNode* third = new SinglyLinkedListNode(3);
	SinglyLinkedListNode* fourth = new SinglyLinkedListNode(4);

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = nullptr;

	cout << has_cycle(first) << endl;


	return 0;
}
