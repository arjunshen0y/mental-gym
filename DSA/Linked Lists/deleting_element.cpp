////Deleting element in a Linked List
/*
Case 1 : Deleting at the beginning
Case 2 : Deleting in between 
Case 3 : Deleting at the end
Case 4 : Deleting after a node

(time complexities are same as that of the respective Insertion cases)
*/

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
	std::cout<<std::endl;
}

struct Node *delete_beginning(struct Node* head){
	struct Node* ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

struct Node*delete_random(struct Node* head, int index){
	struct Node *ptr = head;
	struct Node *q = ptr;
	int i = 1;
	while(i < index){
		ptr = ptr->next;
		i++;
	}
	q = ptr->next;
	ptr->next = q->next;
	free(q);
	return head;
}

struct Node *delete_end(struct Node *head){
	struct Node* ptr = head->next, *q = head;
	while(ptr->next != nullptr){
		ptr = ptr->next;
		q = q->next;
	}
	q->next = nullptr;
	free(ptr);
	return head;
}

struct Node *delete_a_node(struct Node *head, struct Node *prevNode){
	struct Node *ptr = prevNode->next;
	prevNode->next = ptr->next;
	free(ptr);
	return head;
}
	
	
int main(){
	
	int choice;
	int num;
	
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
	
	std::cout<<"Where do you want to delete the element? Choose(1-4) "<<std::endl;
	std::cout<<"1.At the beginning "<<'\n'<<"2.In the middle "<<'\n'<<"3.At the end "<<'\n'<<"4.After a node"<<"\n\n";
	std::cin>>choice;
	
	switch(choice){
		case 1:
			head = delete_beginning(head);
		case 2:
			head = delete_random(head,2);
		case 3:
			delete_end(head);
		case 4:
			delete_a_node(head,second);
	}
	
	std::cout<<"The new linked list after the above operation is:"<<"\n\n";
	
	linked_list_traversal(head);
}