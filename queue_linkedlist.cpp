// queue operations must be constant time operations 
#include<iostream>

struct node {
    
    int data;
    node* next;
    
    };

node* front;
node* rear;


void Enqueue(int x){
    node temp = new node();
    temp->next=nullptr;
    temp->data =x;
        
    if(front == nullptr && rear == nullptr){
        front = rear = temp; 
        return;
        }
    rear->next=temp;
    rear=temp;
    
    
    }
    
void Dequeue(){
    
    node* temp = front;
    if(front ==nullptr) return;
    if(front ==rear){
        front = rear= nullptr;}
    else { 
        front = front->next;
    
    }
    free(temp);
    }

int main(){
    
    node* front = nullptr;
    node* rear = nullptr;
    
    
    }
