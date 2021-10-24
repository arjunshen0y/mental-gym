//Creation and Traversal of a Linked List.

#include<iostream>

struct Node{
	int value;
	struct Node * next;	
};

void linked_list_traversal(struct Node* head){
	std::cout<<"The elements of the linked list are: ";
	while(head != nullptr){
		std::cout<<head->value<<"  ";
		head = head->next;
	}
}

int main(){
	
	Node *head,*first,*second,*third;
	head = new struct Node;
	first = new struct Node;
	second = new struct Node;
	third = new struct Node;

	/*head = (struct Node*)malloc(1*sizeof(struct Node));
	first = (struct Node*)malloc(1*sizeof(struct Node));
	second = (struct Node*)malloc(1*sizeof(struct Node));
	third = (struct Node*)malloc(1*sizeof(struct Node));
	*/
	
	head = first;
	
	first->value = 3;
	first->next = second;
	
	second ->value = 5;
	second->next = third;
	
	third->value = 9;
	third->next = NULL;
	
	linked_list_traversal(head);
}