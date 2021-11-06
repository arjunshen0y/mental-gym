//Depth First Search - Inorder, Preorder, PostOrder

#include<iostream>
#include<queue>

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

void Preorder(BSTNode *root){
	
	if(root == nullptr)return;
	
	std::cout<<root->data<<std::endl;
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(BSTNode *root){
	
	if(root == nullptr)return;
	
	Inorder(root->left);
	std::cout<<root->data<<std::endl;
	Inorder(root->right);
}

void Postorder(BSTNode *root){
	
	if(root == nullptr) return;
	Postorder(root->left);
	Postorder(root->right);
	std::cout<<root->data<<std::endl;
}
		
int main(){
	
	BSTNode *root = nullptr;
	root = Insert(root,12);root = Insert(root,19);
	root = Insert(root,5);root = Insert(root,17);
	root = Insert(root,3);root = Insert(root,24);
	
	std::cout<<"Preorder : "<<std::endl;
	Preorder(root);
	std::cout<<"Inorder : "<<std::endl;
	Inorder(root);
	std::cout<<"Postorder : "<<std::endl;
	Postorder(root);
}