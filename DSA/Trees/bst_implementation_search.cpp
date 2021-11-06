//Binary Search Tree Implementation and Search.
#include<iostream>

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};

BSTNode *Insert(BSTNode *root,int data){
	BSTNode *newnode = new BSTNode;
	if(root == nullptr){
		root = newnode;
		root->data = data;
		root->left = root->right = nullptr;
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}
	return root;
}

bool Search(BSTNode *root, int data){
	
	if(root == nullptr)
		return false;
	else if(data == root->data) 
		return true;
	else if(data <= root->data)
		return Search(root->left,data);
	else
		return Search(root->right,data);
}



int main(){
	
	BSTNode *root = nullptr;
	root = Insert(root,12);root = Insert(root,19);
	root = Insert(root,5);root = Insert(root,17);
	root = Insert(root,13);root = Insert(root,24);
	
	std::cout<<Search(root,24);
	
}