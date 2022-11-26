#include<iostream>
#include<stack>


struct node{
    
    int data;
    node* next;
    
    
    };
node* head;


node* reverse(){
    if (head == nullptr)return;
    stack<struct node*> S;
    node* temp = head;
    while(temp!=nullptr){
        
        S.push(temp);
        temp = temp->next;
        
        }
    
    temp = S.top(); head = temp; 
    S.pop();
    while(!S.empty()){
        
        temp->next = S.top();
        S.pop();
        temp=temp->next;
        
        
        }
    temp->next = nullptr;
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


int main(){

    Insert(1,1);
    Insert(2,2);
    Insert(3,3);
    reverse();
    }
