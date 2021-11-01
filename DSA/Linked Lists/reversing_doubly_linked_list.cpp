//Reversing a Doubly Linked List

#include<iostream>

struct Node{
	int value;
	struct Node *prev;
	struct Node *next;	
};

void traversal(struct Node* node){
	while(node != nullptr){
		std::cout<<node->value<<" ";
		node = node->next;
	}
	std::cout<<std::endl;
}

int main(){
	
	Node *N1,*N2,*N3,*N4;
	N1 = new struct Node;
	N2 = new struct Node;
	N3 = new struct Node;
	N4 = new struct Node;
	
	N1->value = 41;
	N1->prev = NULL;
	N1->next = N2;
	
	N2->value = 52;
	N2->prev = N1;
	N2->next = N3;
	
	N3->value = 87;
	N3->prev = N2;
	N3->next = N4;
	
	N4->value = 93;
	N4->prev = N3;
	N4->next = NULL;
	
	traversal(N1);
	
	//reversing
	Node *ptr1, *ptr2;
	ptr1 = N1;
	ptr2 = N1->next;
	
	ptr1->next = nullptr;
	ptr1->prev = ptr2;
	
	while(ptr2 != nullptr){
		ptr2->prev = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->prev;
	}
	
	std::cout<<"The reversed linked list : "<<std::endl;;
	traversal(ptr1);
	
	
	
	
}