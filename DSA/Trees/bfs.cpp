//Level Order Traversal- BFS
/* Time Complexity = O(n)
	Space Complexity = O(1)- best case, O(n) in worst case
*/

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

std::queue<BSTNode*> Nodes;

void LevelOrder(BSTNode* root){
	
	if(root == nullptr) return;
	Nodes.push(root);
	while(!Nodes.empty()){
		BSTNode* current = Nodes.front();
		std::cout<<current->data<<std::endl;
		if(current->left != nullptr)
			Nodes.push(current->left);
		if(current->right != nullptr)
			Nodes.push(current->right);
		Nodes.pop();
	}
}

int main(){
	
	BSTNode *root = nullptr;
	root = Insert(root,12);root = Insert(root,19);
	root = Insert(root,5);root = Insert(root,17);
	root = Insert(root,3);root = Insert(root,24);
	
	
	LevelOrder(root);
}