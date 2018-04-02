
#include <iostream>

using namespace std;

struct node {
	int inf;
	node *left, *right;
};

void insert_node(node * &root, int x) {
	if (root == NULL) {
		root = new node;
		root->inf = x;
		root->left = NULL;
		root->right = NULL;
	}
	else if (x < root->inf)  insert_node(root->left, x);
	else insert_node(root->right, x); 
}

void search(node *root) {
	if (root != NULL) {
		cout << root->inf << " ";
		search(root->left);
		search(root->right);
	}
}

void summ(node *root, int &sum) {
	if (root != NULL) {
		sum += root->inf;
		summ(root->left, sum);
		summ(root->right, sum);
	}
}

int main(int argc[])
{	
	node *root = NULL;
	int sum = 0;
	for (int i = 1; i <= 6; i++) insert_node(root, i);
	search(root);
	summ(root, sum);
	cout <<sum<<endl;
	system("pause");
	return 0;
}
