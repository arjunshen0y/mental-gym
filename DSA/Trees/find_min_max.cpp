//Find Min and Max element in a BST + Height of BST.

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

void FindMin(BSTNode* root){
	if(root == nullptr){
		std::cout<<"The tree is empty";
	}
	else{
		while(root->left != nullptr){
			root = root->left;
		}
		std::cout<<"The minimum is : "<<root->data<<std::endl;
	}
}

void FindMax(BSTNode* root){
	if(root == nullptr){
		std::cout<<"The tree is empty";
	}
	else{
		while(root->right != nullptr){
			root = root->right;
		}
		std::cout<<"The maximum is : "<<root->data<<std::endl;
	}	
}

int FindHeight(BSTNode *root){
	if(root == nullptr)
		return -1;
	return std::max(FindHeight(root->left), FindHeight(root->right)) + 1;
}


int main(){
	
	BSTNode *root = nullptr;
	root = Insert(root,12);root = Insert(root,19);
	root = Insert(root,5);root = Insert(root,17);
	root = Insert(root,3);root = Insert(root,24);
	FindMin(root);
	FindMax(root);
	
	int height = FindHeight(root);
	std::cout<<"The Height is : "<<height<<std::endl;
	
	
	
}