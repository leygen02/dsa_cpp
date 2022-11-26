#include<iostream>


struct node{
	
	int data;
	node* next;
	node* prev;
	
	};
	
node* head;

node* GetNewNode(int x){
	
	node* newNode = new node();
	newNode->prev=nullptr;
	newNode->next=nullptr;
	newNode->data=x;
	return newNode;
	
	}

void InsertAtHead(int x){
	
	node* newNode = GetNewNode(x);
	if(head == nullptr){
		
		head = newNode;
		return;
		
		}
	head->prev = newNode;
	newNode->next=head;
	head=newNode;
	
	}

void Print(){
	
	node* temp = head;
	while(temp!=nullptr){
		temp=temp->next;
		std::cout<<temp->data<<std::endl;
		
		}
	
	}

void ReversePrint(){
	
	node* temp=head;
	if (temp==nullptr)
	return; 
	}

int main (){
	
	
	
	
	
	}
