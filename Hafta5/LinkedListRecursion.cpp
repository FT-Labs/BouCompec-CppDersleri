#include <iostream>
using namespace std;


// C++ ta : this->data = data
// Python da : self.data = data
// Java da : this.data = data


class Node
{
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
	}
};

void printTraversal(Node* head)
{
	if(head == NULL)
		return;
	else
	{
		cout << head->data << ' ';
		head = head->next;
	}

	printTraversal(head);
}

void printReversed(Node* head)
{
	if(head == NULL)
		return;

	printReversed(head->next);

	cout << head->data << ' ';

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
	(*fourth).next = nullptr;

	//printTraversal(head);
	printReversed(head);


	return 0;
}
