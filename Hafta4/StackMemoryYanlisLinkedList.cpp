#include <iostream>
using namespace std;


class Node
{
	public:
		int data;
		Node* next;

	//Deconstructor,destroyer
	~Node()
	{
		cout << "Bir tane node hafizadan silindi." << endl;
	}
};

void printLinkedList(Node head)
{
	while(head.next != NULL)
	{
		cout << head.data << ' ';
		head = *head.next;
	}
	cout << head.data << endl;
}

void insertHeadNode(Node& head,int data)
{
	Node newNode = Node();
	newNode.data = data;
	newNode.next = &head;
	head = newNode;
}


int main()
{
	Node head = Node();
	Node second = Node();
	Node third = Node();
	Node fourth = Node();

	head.data = 1;
	second.data = 2;
	third.data = 3;
	fourth.data = 4;

	head.next = &second;
	second.next = &third;
	third.next = &fourth;
	fourth.next = NULL;

	// Void-> non-type , NULL-> non-value

	printLinkedList(head);
	cout << endl;
	insertHeadNode(head,0);
	printLinkedList(head);

	return 0;
}


