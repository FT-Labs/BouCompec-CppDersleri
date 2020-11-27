#include <iostream>
using namespace std;



struct Node
{
	int data;
	Node* next;

	Node(int data):data(data)
	{}
};
Node* createNode(int);

void printLinkedList(Node* head)
{
	while(head!=NULL)
	{
		cout << head->data << ' ';
		head = head->next;
	}
}

void insertHeadNode(Node** head,int data)
{
	Node* newNode = createNode(data);

	newNode->next = (*head);

	(*head) = newNode;
}

void insertTailNode(Node** head , int data)
{
	Node* newNode = createNode(data);

	Node* last = *head;

	newNode->next = nullptr;

	while(last->next != nullptr)
		last = last->next;

	last->next = newNode;
}



int main()
{
	Node* head = createNode(1);
	Node* second = createNode(2);
	Node* third = createNode(3);
	Node* fourth = createNode(4);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = nullptr;

	printLinkedList(head);
	cout << endl;
	insertHeadNode(&head,-5);
	printLinkedList(head);
	cout << endl;
	insertTailNode(&head,10150);
	printLinkedList(head);



	return 0;
}





Node* createNode(int data)
{
	Node* newNode = new Node(data);
	return newNode;
}
