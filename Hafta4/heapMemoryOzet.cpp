#include <iostream>
using namespace std;


struct Node
{
	int data;
	Node* next;

	~Node()
	{
		cout << "1 node yok edildi." << endl;
	}
};

void insertNode(Node& head)
{
	struct Node newNode;
	newNode.data = 4;
	newNode.next = NULL;
	head.next = &newNode;
}


void insertNode1(Node& head)
{
	struct Node* newNode = new Node();
	//1.yol
//	(*newNode).data = 5;
	// ok operatoru ->
	// Ok operatoru yalnizca class gosteren pointerlar icin kullanilir.
	newNode->data = 5;
	head.next = newNode;

	delete newNode;
}


int main()
{
	Node head = Node();
	head.data = 3;

	cout << head.data << endl;
	insertNode1(head);
	head = *head.next;
	cout << head.data << endl;


	return 0;

}
