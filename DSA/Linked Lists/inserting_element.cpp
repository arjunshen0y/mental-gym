//Inserting element in a Linked List
/*
Case 1(Inserting at the beginning) : O(1)
Case 2(Inserting in between) : O(n)
Case 3(Inserting at the end) : O(n)
Case 4(Inserting after a given Node : O(1)
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

struct Node* add_beginning(struct Node* head,int num){ //function to add in the beginning
	Node *ptr = new struct Node;
	ptr->value = num;
	ptr->next = head;
	return ptr;
}

struct Node* add_random(struct Node* head,int num, int index){ //function to add in the middle
	Node *ptr = new struct Node;
	Node *p = head;
	int i = 1;
	while(i < index){
		p = p->next;
		i++;
	}
	ptr->next = p->next;
	ptr->value = num;
	p->next = ptr;
	return head;
}

struct Node *add_end(struct Node* head, int num){
	Node *p = head;
	Node *ptr = new struct Node;
	while(p->next != nullptr){
		p = p->next;
	}
	ptr->next = nullptr;
	ptr->value = num;
	p->next = ptr;
	return head;
	
}

struct Node *after_a_node(struct Node* head, int num, struct Node* prevNode){
	Node *ptr = new struct Node;
	ptr->next = prevNode->next;
	prevNode->next = ptr;
	ptr->value = num;
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
	
	std::cout<<"Enter the value to be added : ";
	std::cin>>num;
	
	std::cout<<"Where do you want to insert the element? Choose(1-4) "<<std::endl;
	std::cout<<"1.At the beginning "<<'\n'<<"2.In the middle "<<'\n'<<"3.At the end "<<'\n'<<"4.After a node"<<"\n\n";
	std::cin>>choice;
	
	switch(choice){
		case 1:
			head = add_beginning(head,num);
		case 2:
			head = add_random(head,num,2);
		case 3:
			add_end(head,num);
		case 4:
			after_a_node(head,num,second);
	}
	
	std::cout<<"The new linked list after the above operation is:"<<"\n\n";
	
	linked_list_traversal(head);
}