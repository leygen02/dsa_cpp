#include<iostream>

struct node{
	
	int data;
	node* next;
	
	
	
	};  

node* head;


void Print(){
	node* temp = head;
	while( head!= nullptr){
		
		std::cout<<" " <<temp->data; 
		temp = temp->next;
	
		}
	
	}


void Insert(int x, int n){
	
	node* temp1 = new node();
	temp1->data = x;
	temp1->next = nullptr;
	
	if(n == 1){
		
		temp1->next = head;
		head = temp1;
		return;
		// used return instead of else
		}
	
	
	
	
	
	node* temp2 = head; 
	
	//temp2 variables iterates the lists to the current last node and sets it as next 
	
	for(int i=0;i<n-2;i++){
		
		temp2 = temp2->next; 
		
		}
	temp1->next=temp2->next;
	temp2->next=temp1; 
}

void Delete(int n){
	
	node* temp1 = head;
	
	if (n ==1){
		
		head = temp1->next;
		free(temp1);
		return;
		}
	node* temp2 = temp1->next;
	temp1->next=temp2->next;
	free(temp2);
	
	}
/*	
// Iterative approach	
void ITR_Reverse(){
	
	node* temp,prev;
	temp = head;
	
	while(temp!=nullptr){
		temp->next = prev;
	
	}	}
*/	
	
// Recursive approach
void Rec_Reverse(node* temp){
	
	if(temp->next ==nullptr){
		
		head = temp;
		return;
		
		
		
	}
	Rec_Reverse(temp->next);
	temp->next->next=temp; // p->next->next = p;
	
	
	
	}

void Rerverse_Print(node* p){
	
	if(p==nullptr){
		
		
		return;
		
		}
	Rerverse_Print(p->next);
	std::cout<<p->data;	
	
	}

int main(){
	
	head = nullptr;
	Insert(2,1);
	Insert(3,2);
	Insert(5,3);
	Insert(7,4);

	
	
	
	Rerverse_Print(head);
	Print();
	
	}
