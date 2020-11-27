#include <iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;

	Node(int data):data(data)
	{}
	Node(){}

	~Node()
	{
		cout << "Node yok edildi." << endl;
	}
};

//Single linked list traversal

void printLinkedList(Node* head)
{
	while(head!=NULL)
	{
		cout << head->data << ' ';
		head = head->next;
	}
}

//{1,2,3,4,5} 3uncu indexindeki elemanin yerine 12
// 1 2 3 ,"12", 4 5
// O(n^2) merge sort-> O(n log(n))

Node* insertTailNode(Node* head,int data)
{
	Node* tmp = head;
	while(head->next!=NULL)
		head = head->next;

	Node* newNode = new Node(data);
	head->next = newNode;
	newNode->next = nullptr;

	head = tmp;
	return head;
}

Node* insertHeadNode(Node* head,int data)
{
	//Node* newNode = new Node(data);
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = head;

	return newNode;
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
	//third->next = NULL;

	printLinkedList(head);
	cout << endl;

	head = insertHeadNode(head,5);

	printLinkedList(head);
	cout << endl;

	head = insertTailNode(head,11);

	printLinkedList(head);


	return 0;

}
