#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data)
	{
		this->data = data;
	}
};

Node* createNode(int data)
{
	Node* newNode = new Node(data);
	return newNode;
}

void printInorderTraversal(Node* root)
{
	if(root==nullptr)
		return;

	printInorderTraversal(root->left);

	cout << root->data << ' ';

	printInorderTraversal(root->right);
}

void preOrderTraversal(Node* root)
{
	if(root==nullptr)
		return;

	cout << root->data << ' ';

	preOrderTraversal(root->left);

	preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root)
{
	if(root==nullptr)
		return;

	postOrderTraversal(root->left);

	postOrderTraversal(root->right);

	cout << root->data << ' ';

}




int main()
{
	Node* root = createNode(1);
	root->left = createNode(2);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->left->left->left = createNode(8);
	root->left->left->right = createNode(9);
	root->left->right->left = createNode(10);
	root->left->right->right = createNode(11);
	root->right = createNode(3);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	root->right->left->left = createNode(12);
	root->right->left->right = createNode(13);

	printInorderTraversal(root);

	cout << endl << endl;

	preOrderTraversal(root);

	cout << endl << endl;

	postOrderTraversal(root);


	return 0;
}
