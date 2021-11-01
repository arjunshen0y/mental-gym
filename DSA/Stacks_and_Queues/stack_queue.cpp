//stack uses LIFO and queue uses FIFO
#include<iostream>
#include<stack>
#include<queue>

int main(){
	std::stack<int> stack;
	stack.push(14);
	stack.push(45);
	stack.push(123);
	stack.push(145);
	
	std::queue<int> queue;
	queue.push(54);
	queue.push(434);
	queue.push(543);
	
	
	
	std::cout<<"Stack elements : ";
	while(stack.empty() != true){
		std::cout<<stack.top()<<std::endl;
		stack.pop();
	}
	
	std::cout<<"Queue elements : ";
	while(queue.empty() != true){
		std::cout<<queue.front()<<std::endl;
		queue.pop();
	}
}